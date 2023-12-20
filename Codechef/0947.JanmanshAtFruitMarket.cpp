#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,a,b,c, temp;
	    cin>>x>>a>>b>>c;
	    int sm = a+b+c;
	    temp = a;
	    a = min(min(a,b), c);
	    c = max(max(temp,b), c);
	    b = sm-a-c;
	    cout<<(x-1)*a + b<<endl;
	    
	}
	return 0;
}
