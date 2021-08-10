// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int n)
    {
        int neg=0,zero=0,steps=0;
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i]<0){steps += (0 - arr[i] - 1);neg++;}

            else if(arr[i]==0)
                zero++;

            else{steps += (arr[i]-1);}

        }

        if(neg%2!=0)
        {
            if(zero>0)
            {
                steps += 1;
                zero--;
            }
            else steps += 2;
        }
        if(zero>0) steps += zero;

        return steps;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;

        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}  // } Driver Code Ends
