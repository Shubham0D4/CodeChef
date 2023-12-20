#include <iostream>
using namespace std;

int main() {
	int n, r;
	cin>>n>>r;
	for(int i = 0; i<n; i++){
	    int k;
	    cin>>k;
	    if(k>r||k==r){
	        cout<<"Good boi"<<endl;
	    }
	    else{
	        cout<<"Bad boi"<<endl;
	    }
	}
	return 0;
}
