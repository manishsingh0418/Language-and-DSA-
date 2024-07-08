#include <iostream>
using namespace std;
int theSequence(int N)
{
    if(N==0)
    {
        return 1;
    }
    return (N+ N*(theSequence(N-1)));
}
int main() {
	    int N;
	    cin>>N;
	    cout<<theSequence(N)<<endl;
	return 0;
}
