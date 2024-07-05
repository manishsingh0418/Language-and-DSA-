//{ Driver Code Starts

#include<iostream>
#include<vector>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void eraseAt(vector<int> &V, int pos)
{
    // Check if position is valid
    if (pos >= 0 && pos < V.size())
    {
        V.erase(V.begin() + pos);
    }
}

void eraseInRange(vector<int> &V, int start, int end)
{
    // Check if range is valid
    if (start >= 0 && end <= V.size() && start < end)
    {
        V.erase(V.begin() + start, V.begin() + end);
    }
}

void clearAll(vector<int> &V)
{
    V.clear();
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];

        int Erasetype;
        cin >> Erasetype;

        if (Erasetype == 1)
        {
            clearAll(V);
        }
        else if (Erasetype == 2)
        {
            int pos;
            cin >> pos;
            eraseAt(V, pos);
        }
        else
        {
            int start, end;
            cin >> start >> end;
            eraseInRange(V, start, end);
        }

        if (V.empty())
            cout << "Empty" << endl;
        else
        {
            for (auto itr = V.begin(); itr != V.end(); itr++)
                cout << *itr << " ";
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends
