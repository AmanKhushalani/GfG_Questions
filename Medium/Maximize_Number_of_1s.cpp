// Question link = https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1
// DIficulty = Medium !

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        queue<int> help;
        int temp=m,maxi=0,start=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0 && temp>0)
            {
                help.push(i);
                temp--;
            }
            else if(arr[i]==0)
            {
                maxi = max(maxi , abs(i-start));
                if(help.empty())
                    start = i+1;
                else
                {
                    help.push(i);
                    start = help.front()+1;
                    help.pop();
                }
            }
        }
        maxi = max(maxi , abs(n-start));
        return maxi;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
