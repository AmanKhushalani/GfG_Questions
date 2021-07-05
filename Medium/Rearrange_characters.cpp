// Question link:- https://practice.geeksforgeeks.org/problems/rearrange-characters4649/1
class Solution
{
    public:
    string change(string temp , char c )
    {
        for(int i=0;i<temp.length();i++)
        {
            if(i==0 && temp[i]!=c)
                return c+temp;             
            
            else if(temp[i]!=c && temp[i+1]!=c)
                return temp.substr(0,i+1) + c + temp.substr(i+1,temp.length());
            
            else if(i==temp.length()-1 && temp[i]!=c)
                return temp+c;
            
        }
        return "";
    }
    
    string rearrangeString(string str)
    {
        string temp = str;
        for(int i=0;i<str.length();i++)    
        {
            if(str[i] == str[i+1])
            {
                str = change(str.substr(0,i+1)+str.substr(i+2,str.length()) , str[i+1]);
                if(str == "")
                    return "-1";
                else
                    i -=1;
            }
        }
        return str;
    }
};
