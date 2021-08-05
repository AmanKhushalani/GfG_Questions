#include<bits/stdc++.h>

using namespace std;


class Solution
{
    public:
    string mostFrequentWord(string arr[], int n)
    {
        int maxi=INT_MIN,last=INT_MAX;
        string answer;
        map<string,int> help;
        map<string,int> occ;
        for(int i=0;i<n;i++)
        {
            help[arr[i]] += 1;

            if(help[arr[i]] == 1)
                occ[arr[i]]  = i;

            if(help[arr[i]] > maxi)
            {
                answer = arr[i];
                maxi = help[arr[i]];
            }
            // {"a" , "b" , "a" , "b"}
            else if(help[arr[i]] == maxi)
            {
                if(occ[answer] < occ[arr[i]])
                    answer = arr[i];
            }
        }
        return answer;
    }
};

int main()
{
    //int n=4;
    //string arr[n] = {"aman","is","aman","is"};
    int n = 17;
    string arr[n] = {"xejdcj", "xejdcj", "lvjpb", "tmyuiu", "lvjpb", "tmyuiu", "ovoba", "lvjpb", "lvjpb", "fqhyu", "fqhyu",
                    "tmyuiu", "xejdcj", "tmyuiu" ,"fqhyu" ,"ovoba", "xejdcj"};
    Solution s;
    cout<<s.mostFrequentWord(arr,n);
}






/*
#include<bits/stdc++.h>

using namespace std;


class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n)
    {
        sort(arr , arr+n);
        stack<string> help;
        help.push(arr[0]);
        int counter=0,maxi=0,index=n-1,i;
        for(i=0;i<n;i++)
        {
            if(help.top() == arr[i])
                counter++;
            else
            {
                if(counter>=maxi)
                {
                    index = i-1;
                    maxi = counter;
                }
                counter=0;
                help.push(arr[i]);
                i--;
            }
        }
        if(counter>=maxi)
        {
            index = i-1;
        }

        return arr[index];

    }
};

int main()
{
    //int n=4;
    //string arr[n] = {"aman","is","aman","is"};
    int n = 17;
    string arr[n] = {"xejdcj", "xejdcj", "lvjpb", "tmyuiu", "lvjpb", "tmyuiu", "ovoba", "lvjpb", "lvjpb", "fqhyu", "fqhyu",
                    "tmyuiu", "xejdcj", "tmyuiu" ,"fqhyu" ,"ovoba", "xejdcj"};
    Solution s;
    cout<<s.mostFrequentWord(arr,n);
}

*/
