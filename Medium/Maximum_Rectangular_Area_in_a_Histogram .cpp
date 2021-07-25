// Question link = https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1#
// Dificulty = Medium 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    void right(vector<long long> &sarr , long long arr[] , int n)
    {
        stack<long long> num;
        num.push(0);
        for(int i=1;i<n;i++)
        {
            if(num.empty())
                num.push(i);
            else if( arr[i] < arr[num.top()])
            {
                sarr[num.top()] = i-1;
                num.pop();
                i--;
            }
            else
                num.push(i);
        }

        while(!num.empty())
        {
            sarr[num.top()] = n-1;
            num.pop();
        }

    }

    void left(vector<long long> &earr , long long arr[] , int n)
    {
        stack<long long> num2;
        num2.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            if(num2.empty())
                num2.push(i);

            else if(arr[i]<arr[num2.top()])
            {
                earr[num2.top()] = i+1;
                num2.pop();
                i++;
            }
            else
                num2.push(i);
        }


    }

    long long getMaxArea(long long arr[], int n)
    {
        long long max_area = 0;
        vector<long long> sarr(n);
        vector<long long> earr(n , 0);

        right(sarr , arr , n);
        left(earr , arr , n);

        for(int i=0;i<n;i++)
        {
            long long temp = (abs(sarr[i] - earr[i] + 1) * arr[i]);
            if ( temp > max_area)
                max_area = temp;
        }
        return max_area;


    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
