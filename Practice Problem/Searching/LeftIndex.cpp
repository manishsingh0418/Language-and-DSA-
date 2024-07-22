//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
// Function to find element in sorted array

int leftIndex(int N, int arr[], int X){
    int l=0;
    int h=N-1;
 while (l <= h) {
        int mid = l + (h - l) / 2; // Recalculate mid in each iteration
        if (arr[mid] == X) {
            // Check if it's the first occurrence
            if (mid == 0 || arr[mid - 1] != X) {
                return mid;
            } else {
                h = mid - 1; // Move left to find the first occurrence
            }
        } else if (X < arr[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}




//{ Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    int elemntToSearch;
	    cin >> elemntToSearch;
	    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	}
	
	return 0;
}
// } Driver Code Ends

