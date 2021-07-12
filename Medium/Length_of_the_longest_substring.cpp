// Question link:- https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1
//Dificulty :- Medium !
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        vector<int> arr(26, -1);
        vector<int> visited(26, -1);
        int high=0;
        string str="";
        for(int i=0; i<s.length() ; i++)
        {
            if(arr[s[i]-97] != 1)
            {
                str += s[i];
                arr[s[i]-97] = 1;
                visited[s[i]-97] = i;
            }
            else
            {
                high = (high < str.length())?str.length():high;
                fill(arr.begin() , arr.end() , -1);
                i = visited[s[i]-97];
                str="";
            }

        }
        high = (high < str.length())?str.length():high;
        return high;

    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends
