#include <iostream>
using namespace std;

int main() {
	int t = 0;
	cin>>t;
	for(int i = 0;  i<t; i++){
	    int n;
	    cin>>n;
	    if(n%7==6){
	        cout<<n/7 + 1<<endl;
	    }
	    else{
	        cout<<n/7<<endl;
	    }
	}
	
	return 0;
}
