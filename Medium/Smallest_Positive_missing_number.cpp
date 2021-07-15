// Question :- https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1/?category[]=Arrays&category[]=Arrays&company[]=Amazon&company[]=Amazon&problemType=functional&page=1&sortBy=submissions&query=category[]Arrayscompany[]AmazonproblemTypefunctionalpage1sortBysubmissionscompany[]Amazoncategory[]Arrays

// Dificulty:- Medium

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n)
    {
        sort(arr,arr+n);
        int new_arr[arr[n-1]+2] = {0};

        for(int i=0;i<n;i++)
        {

            if(arr[i]>0)
            {
                new_arr[arr[i]] = 1;
            }
        }

        for(int i=1;i<arr[n-1]+2;i++)
        {
            if(new_arr[i]==0)
            {
                return i;
            }
        }

        return 0;
    }
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() {

    //taking testcases
    int t;
    cin>>t;
    while(t--){

        //input number n
        int n;
        cin>>n;
        int arr[n];

        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];

        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0;
}   // } Driver Code Ends
