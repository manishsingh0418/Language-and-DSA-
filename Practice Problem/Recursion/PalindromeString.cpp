#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str, int s, int e) 
{ 
    // If there is only one character 
    if (s == e) 
        return true; 
  
    // If first and last 
    // characters do not match 
    if (str[s] != str[e]) 
        return false; 
  
    // If there are more than  
    // two characters, check if  
    // middle substring is also  
    // palindrome or not
    if (s < e) 
        return isPalindrome(str, s + 1, e - 1); 
  
    return true; 
} 
int main()
{
    int n;
    cin>>n;
    string str(n,' ');
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int s=str[0];
    int e=str[n-1];
    cout<<isPalindrome(str,s,e);
}