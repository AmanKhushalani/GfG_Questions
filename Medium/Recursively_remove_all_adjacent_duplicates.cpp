//Question Link:-
//https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates0744/1#

//Question Type :- Medium

//Solution :-


// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string result="";
    int count,step_back=0,do_again=0;
    string remove(string s){
        
        do{
            do_again = 0;
            for( count=0 ; count<s.length() ; count++ )
            {
                if(result[result.length()-1] != s[count] && step_back==0)
                {
                    result+=s[count];            
                }
                else if(result[result.length()-1] == s[count])
                {
                    step_back = 1;
                }
                else if(result[result.length()-1] != s[count] && step_back==1)
                {
                    if(result[result.length()-2] == s[count])
                    {
                        do_again = 1;
                    }
                    result[result.length()-1] = s[count];
                    step_back=0;
                }
            }
            if(step_back==1)
            {
                result[result.length()-1] = '\0';
                step_back=0;
            }
            if(do_again==1)
            {
                s = result;
                result="";
                step_back=0;
            }
        }
        while (do_again!=0);       
    
        return result;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends
