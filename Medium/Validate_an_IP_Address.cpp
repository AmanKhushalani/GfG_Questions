// Question link :- https://practice.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1
//Dificulty Medum

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool valid(string &temp)
        {
            if(temp!="" && to_string( stoi(temp) ).length() == temp.length())
                if (stoi(temp)>=0 && stoi(temp)<=255)
                    return true;
            return false;
        }
        int isValid(string s)
        {
            int counter=0,dot=0;
            string temp = "";
            for(int i=0 ; i<s.length() ;i++)
            {
                if( s[i] !='.')
                {
                    if(s[i]>=48 && s[i]<=57)
                        temp += s[i];
                    else
                        return 0;
                }
                else
                {
                    if(s[i]=='.')
                        dot++;
                    if(temp.length()<=3 && valid(temp))
                    {
                        counter++;
                        temp="";
                    }
                    else return 0;
                }

            }
            if(temp.length()<=3 && valid(temp))
                counter++;
            if(counter==4 && dot==3)
                return 1;
            return 0;
        }
};

int main() {
//    222.222.222.222
    // your code goes here
    //string s = "22.22.2.0";
    string s = "0.0.0.0.";
    Solution ob;
    cout << ob.isValid(s) << endl;


    return 0;
}  // } Driver Code Ends
