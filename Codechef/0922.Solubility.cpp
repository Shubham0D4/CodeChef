#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int  i = 0; i<t; i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout<<(b+((100-a)*c))*10<<endl;
	}
	return 0;
}
