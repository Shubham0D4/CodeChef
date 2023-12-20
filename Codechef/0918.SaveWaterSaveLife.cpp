#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int h,x,y,c;
	    cin>>h>>x>>y>>c;
	    int total = x+(y/2);
	    int entire = total*h;
	    if(c>=entire){
	        cout<<"yes"<<endl;
	    }
	    else
	        cout<<"no"<<endl;
	}
	return 0;
}
