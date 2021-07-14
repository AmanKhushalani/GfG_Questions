// Question link:- https://practice.geeksforgeeks.org/problems/element-appearing-once2552/1

// Dificulty :- Medium

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(int A[], int N){
	    sort(A , A+N);
	    stack<int> nums;
	    for(int i=0;i<N;i++)
	    {
            if(nums.empty())
                nums.push(A[i]);
            else if(nums.top() == A[i])
                nums.pop();
	    }
	    return nums.top();


	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends
