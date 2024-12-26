//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  private:
    void pass(vector<vector<int>> &mat, int row, int col, vector<vector<bool>> & vec){
        for (int i=0; i<mat[row].size(); i++){
            if(mat[row][i]!=0){
                mat[row][i]= 0;
                vec[row][i]= false;
            }
        }
        //for the column
        for (int i=0; i<mat.size(); i++){
            if(mat[i][col]!=0){
                mat[i][col]= 0;
                vec[i][col]= false;
            }
        }
    }
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
   
   vector<vector<bool>> vec(mat.size(), vector<bool>(mat[0].size(), true));
   for(int i=0; i<mat.size(); i++){
       for(int j=0; j<mat[i].size(); j++){
           if(mat[i][j]==0 and vec[i][j]==true){
               pass(mat, i, j, vec);
               
           }
       }
   }
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends