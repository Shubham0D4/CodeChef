#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int n, l, r, x;
	    cin>>n;
	    cin>>l;
	    cin>>x;
	    r = min(l, n-l);
	    cout<<r*x<<endl;;
	    
	}
	return 0;
}
