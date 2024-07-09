#include<iostream>
using namespace std;

int maxPieces(int n, int a, int b, int c) {
    if (n == 0) return 0;
    if (n < 0) return -1;
    
    int res = max(maxPieces(n-a, a, b, c), max(maxPieces(n-b, a, b, c), maxPieces(n-c, a, b, c)));
    
    if (res == -1) return -1;
    return res + 1;
}

int main() {
    int n, a, b, c;
    cout << "Enter N: ";
    cin >> n;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
    
    int result = maxPieces(n, a, b, c);
    if (result == -1)
        cout << "Not possible to divide into given pieces." << endl;
    else
        cout << "Maximum number of pieces: " << result << endl;
        
    return 0;
}
