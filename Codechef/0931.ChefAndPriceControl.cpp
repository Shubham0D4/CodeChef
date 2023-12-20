#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    int k, lsum = 0, psum = 0;
	    cin>>k;
	    for(int j = 0; j<n; j++){
	        cin>>arr[j];
	        if(arr[j]<=k){
	            lsum = lsum + arr[j];
	            psum = psum + arr[j];
	        }
	        else{
	            psum = psum + arr[j];
	            lsum = lsum + k;
	        }
	    }
	    cout<<psum - lsum<<endl;
	}
	return 0;
}
