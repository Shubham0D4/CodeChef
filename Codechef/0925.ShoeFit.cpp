#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int s, e, d;
	    cin>>s>>e>>d;
	    if(s!=e || s!=d || e!=d){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
