#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int j = 0; j<n; j++){
	        cin>>arr[j];
	    }
	    int count = 0;
	    for(int j = 0; j<n ; j++){
	        if(arr[j]%7==0 || arr[j]%7==6){
	            continue;
	        }
	        else{
	            count++;
	        }
	    }
	    cout<<(count+8)<<endl;
	}
	return 0;
}
