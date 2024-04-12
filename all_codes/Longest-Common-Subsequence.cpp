#include<iostream>
#include <string>
using namespace std;

int longest_common_subsequence(string s1, string s2)
{
    int str1=s1.size(); //Finding the string length of s1
    int str2=s2.size(); //Finding the string length of s2
    int dp[str1+1][str2+1]; //Formation of dp 2D array
    for(int i=0;i<str1;i++) // Initializing the column 0 of all rows as 0
    {
        for(int j=0;j<1;j++)
        {
            dp[i][j]=0;
        }
    }
     for(int j=0;j<str2;j++) // Initializing the row 0 of all columns as 0
    {
        for(int i=0;i<1;i++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=str1;i++) // Implementation to find the longest common subsequence
    {
        for(int j=1;j<=str2;j++)
        {
            if(s1[i-1]==s2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

        }
    }
    return dp[str1][str2];
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int d= longest_common_subsequence(s1,s2);
    cout<<"The Longest Common Subsequence is "<<d<<endl;
    return 0;
}
