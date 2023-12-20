#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int a, b,c,d;
	    cin>>a>>b>>c>>d;
	    int e = min(a,c);
	    int f = max(b,d);
	    int count = 0;
	    for(int j = e; j<=f; j++){
	        if(j>=a && j<=b || j>=c && j<=d){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
