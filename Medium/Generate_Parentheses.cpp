//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string> answer;
    void rec(int a,int b,string s)
    {
        if(a<0||b<0||a>b)
            return;
        if(b==0)
        {
            answer.push_back(s);
            return;
        }
        rec(a-1,b,s+"(");
        rec(a,b-1,s+")");
    }

    vector<string> AllParenthesis(int n) 
    {
        rec(n-1,n,"(");
        return answer;
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
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends
