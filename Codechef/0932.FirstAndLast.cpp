#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i = 0; i<t; i++){
	    int n;
	    cin>>n;
	    int arr[1000000];
	    for(int j = 0; j<n; j++){
	        cin>>arr[j];
	    }
	    int sum = 0;
	    for(int j = 0; j<n-1; j++){
	        sum = max(sum, arr[j]+arr[j+1]);
	    }
	    sum = max(sum, arr[0]+arr[n-1]);
	    cout<<sum<<endl;
	}
	return 0;
}
