#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        float l, v1, v2;
        cin>>l>>v1>>v2;
        int it1 = l/v1;
        int it2 = l/v2;
        float ft1 = l/v1;
        float ft2 = l/v2;
        if((ft1-it1)>0){
            it1++;
        }
        if((ft2-it2)>0){
            it2++;
        }
        if((it1-it2)<=1 && (it1-it2)>0){
            cout<<0<<endl;
        }
        if((it1-it2)>1){
            cout<<abs(it1-it2-1)<<endl;
        }
        if((it1-it2)<=0){
            cout<<-1<<endl;
        }
    }
	return 0;
}
