//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
 public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // Abhishek>>
        vector<string>v;
        string word ="";
        for(int i =0; i<str.size(); i++)
        {
            // when string is not equal to dot(.)
            if(str[i]!='.')
            {
                // Store the string in word container
               word += str[i];
            }
            // when dot is placed
            else{
                v.push_back(word);
                word = "";
            }
        }
        v.push_back(word);
        // New make a answer container Because Now we traverse the reverse Direction 
        string answer="";
        // Reverse Traverse the string>>
        for(int i=v.size()-1; i>=0; i--)
        {
            answer += v[i];
           if(i!=0) answer += ".";
        }
        return answer;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends