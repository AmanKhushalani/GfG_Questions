// Question Link :- https://practice.geeksforgeeks.org/problems/plus-one/1#
// Dificulty = Easy !

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {

        vector<int> answer;
        int carry = 1;
        for(int i=arr.size()-1 ; i>=0 ; i--)
        {
            if(arr[i]+carry > 9)
                answer.push_back(0);
            else
            {
                answer.push_back(arr[i]+carry);
                carry=0;
            }
        }
        if(carry!=0)
            answer.push_back(1);
        reverse(answer.begin() , answer.end());
        return answer;

    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;

        cin>>N;
        vector<int> arr(N);

        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
