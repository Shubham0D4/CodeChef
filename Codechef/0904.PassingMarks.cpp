#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int am,bm,cm,tm,a,b,c;
	    cin>>am>>bm>>cm>>tm>>a>>b>>c;
	    if(a>=am && b>=bm && c>=cm){
	        if((a+b+c)>=tm){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
