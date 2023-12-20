#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int x, cc = 0, cn = 0, cd = 0;
	    cin>>x;
	    char arr[14];
	    for(int j= 0; j< 14; j++)cin>>arr[j];
	    for(auto j:arr){
	        if(j == 'C')
	            cc +=2;
	        if(j == 'D'){
	            cc++;
	            cn++;
	        } 
	        if(j=='N')
	            cn+=2;
	    }
	    if(cc>cn){
	        cout<<60*x<<endl;
	    }
	    else if(cc==cn){
	        cout<<55*x<<endl;
	    }
	    else if(cn>cc){
	        cout<<40*x<<endl;
	    }
	}
	return 0;
}
