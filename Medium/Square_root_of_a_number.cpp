// Question link = https://practice.geeksforgeeks.org/problems/square-root/1
// Dificulty = Medium !

#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        for(int i=1;i<=x/2 + 1;i++)
        {
            if(i*i==x)
            {
                return i;
                break;
            }
            else if(i*i > x)
            {
                return i-1;
                break;
            }
        }
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
