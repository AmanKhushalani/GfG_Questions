/*Question Possible Words From Phone Digits  Medium

Link:- 
https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/?company[]=Amazon&company[]=Amazon&page=1&category[]=Recursion&query=company[]Amazonpage1company[]Amazoncategory[]Recursion

SOlution:-
*/
class Solution
{
    public:
    string aman[10] = {"0","0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> answer;
    //Function to find list of all words possible by pressing given numbers.
    void show(int a[] , int i , int n, string s)
    {
        if(i < n-1)
        {

            for(int j=0 ; j<aman[a[i]].length() ; j++)
                show(a , i+1 , n , s+aman[a[i]][j]);
        }
        if(i == n-1)
        {
            for(int j=0; j<aman[a[i]].length() ; j++)
                answer.push_back(s+aman[a[i]][j]);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        show(a , 0 , N , "");
        return answer;
    }
};
