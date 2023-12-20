#include <iostream>
#include<climits>
using namespace std;

int main() {
	int a;
	cin>>a;
	int count = 0;
	if(a==0){
	    count++;
	}
	for(int  i = 0; i< INT_MAX; i++){
	    if(a==0){
	        break;
	    }
	    else{
	        a = a/10;
	        count++;
	    }
	}
	if(count<= 3){
	    cout<<count<<endl;
	}
	else{
	    cout<<"More than 3 digits"<<endl;
	}
	return 0;
}
