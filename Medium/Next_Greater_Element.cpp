//Question Link:- https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1
//Dificulty = Medium !

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    vector<long long> answer1;
    vector<long long> nextLargerElement(vector<long long> &values, int n)
    {
        long long answer[n];
        stack <long long> num;
        num.push(0);

        for(int i=1; i<values.size() ; i++)
        {
            if(num.empty()==true && values[i] >= values[i-1])
                num.push(i);


            else if(values[i] <= values[num.top()])
                num.push(i);
            else
            {
                answer[num.top()] = values[i];
                num.pop();
                i--;
            }
        }
        while(!num.empty())
        {
            answer[num.top()] = -1;
            num.pop();
        }
        for(int i=0;i<n;i++)
            answer1.push_back(answer[i]);
    return answer1;


    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];

        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
