#include <iostream>
using namespace std;

int main() {
	int t; 
	cin>>t;
	for(int i = 0; i<t; i++){
	    int y = 0, y2 = 0;
	    int n = 0, n2 = 0;
	    
	    for(int j = 0; j<3; j++){
	        int k;
	        cin>>k;
	        if(k == 1){
	            y = y+1;
	        }
	        else if(k == 0){
	            n = n+1;
	        }
	    }
	    for(int j = 0; j<3; j++){
	        int k;
	        cin>>k;
	        if(k == 1){
	            y2 = y2+1;
	        }
	        else if(k == 0){
	            n2 = n2+1;
	        }
	    }
	    if(y == y2){
	        cout<<"Pass"<<endl;
	    }
	    else{
	        cout<<"Fail"<<endl;
	    }
	    
	}
	return 0;
}
