#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0 ; i< t; i++){
	    int n, x, k;
	    cin>>n>>x>>k;
	    int g  = n-x;
	    int remb = x%k;
	    int remg = g%k;
	    if(remb == remg){
	        cout<<0<<endl;
	    }
	    else if(remb>remg){
	        cout<<remb-remg<<endl;
	    }
	    else if(remg>remb){
	        cout<<remg-remb<<endl;
	    }
	}
	return 0;
}
