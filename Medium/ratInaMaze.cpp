Question link - https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#
Medium

Solution

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string> answer;

    bool check(pair<int , int> pos, vector<pair<int , int>> &path)
    {
        for(int x=path.size()-1 ; x>=0 ; x--)
        {
            if(path[x] == pos)
                return false;
        }
        return true;
    }

    void draw(int i , int j , int n , string s , vector<pair<int , int>> path , vector<vector<int>> &m)
    {
        if(i<0 || j<0 || i>=n || j>=n || m[i][j]==0)
            return;
        if(i==n-1 && j==n-1)
        {
            answer.push_back(s);
            return;
        }
        
        if(check({i+1,j} , path))
        {
            path.push_back({i+1,j});
            draw(i+1 , j, n , s+"D" , path , m);
            path.pop_back();
        }

        if(check({i,j+1} , path))
        {
            path.push_back({i,j+1});
            draw(i , j+1, n , s+"R" , path , m);
            path.pop_back();
        }
        
        if(check({i-1,j} , path))
        {
            path.push_back({i-1,j});
            draw(i-1 , j, n , s+"U" , path , m);
            path.pop_back();
        }
        
        if(check({i,j-1} , path))
        {
            path.push_back({i,j-1});
            draw(i , j-1, n , s+"L" , path , m);
            path.pop_back();
        }

    }

    vector<string> findPath(vector<vector<int>> &m , int n)
    {
        answer.clear();
        vector<pair<int , int>> path = { {0,0} };
        draw(0,0 , n , "" , path , m);
        sort(answer.begin() , answer.end());
        return answer;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends


