#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int n, count = 0;
	    cin>>n;
	    int arr[n];
	    for(int j = 0; j<n; j++){
	        cin>>arr[j];
	        if(arr[j]!=arr[j-1]) count++;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
