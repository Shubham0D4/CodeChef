#include <iostream>
// #include<climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int a, b;
	    cin>>a>>b;
	    for(int  i = 0; i<3000; i++){
	        if(a>1000 || b>1000){
	            cout<<"no"<<endl;
	            break;
	        }
	        if(a<b){
	            b = b-1;
	            a = a+3;
	        }
	        else if(a>b){
	            a = a-1;
	            b = b+1;
	        }
	        else if(a==b){
	            cout<<"yes"<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
