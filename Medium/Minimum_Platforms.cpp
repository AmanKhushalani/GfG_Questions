// Question link:-
// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr , arr+n);
        sort(dep , dep+n);
    	int platforms=0 , max_platforms=0;
    	for(int i=0,j=0,x=0;x<2*n;x++)
    	{
            if(arr[i]<=dep[j] && i<n)
            {
                platforms += 1;
                i++;
            }
            else
            {
                platforms -= 1;
                j++;
            }
            if( platforms > max_platforms )
                max_platforms = platforms;

    	}
        return max_platforms;
    }
};
