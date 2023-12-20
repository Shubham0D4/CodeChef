#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int x = 1;
	    int a, b, counta = 0, countb = 0;
	    for(int j = 1; j<=10; j++){
	       if(x%2!=0){
	           cin>>a;
	           if(a)
	           counta++;
	       }
	       else if(x%2==0){
	           cin>>b;
	           if(b)
	           countb++;
	       }
	       x++;
	    }
	    if(counta == countb)
	        cout<<0<<endl;
	    else if(counta>countb)
	        cout<<1<<endl;
	    else if(counta<countb)
	        cout<<2<<endl;
	}
	return 0;
}
