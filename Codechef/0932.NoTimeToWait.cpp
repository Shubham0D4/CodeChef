#include <iostream>
using namespace std;

int main() {
	int n,h,x;
	cin>>n>>h>>x;
	int arr[n];
	bool flag = true;
	for(int i = 0; i<n; i++){
	    cin>>arr[i];
	    if(arr[i]>=h-x){
	        cout<<"yes"<<endl;
	        flag = false;
	        break;
	    }
	    
	}
	if(flag){
	    cout<<"no"<<endl;
	}
	return 0;
}
