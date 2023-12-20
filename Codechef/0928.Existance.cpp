#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        uint64_t x, y;
        cin>>x>>y;
        if(x*(x)==2*y){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
	return 0;
}
