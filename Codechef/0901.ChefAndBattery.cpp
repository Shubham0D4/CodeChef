#include <iostream>
#include<climits>
using namespace std;

int main() {

	int t;
    cin>>t;
	for(int i = 0; i<t; i++){
	    int n;
	    cin>>n;
	    if(n>=0 && n<=100){
	        int result = 0;
    	    for(int j = 0; j<INT_MAX;j++){
    	        if(n == 50){
    	            cout<<j<<endl;
    	            break;
    	        }
    	        else if(n > 50){
    	            n-=3;
    	        }
    	        else if(n<50){
    	            n+=2;
    	        }
    	    }
	    }
	    else{
	        continue;
	    }
	}
	return 0;
}

