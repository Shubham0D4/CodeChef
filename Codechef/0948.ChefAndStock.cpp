#include <iostream>
#include<climits>
using namespace std;
int minimum(int arr[], int n){
    int temp = INT_MAX;
    for(int i = 0; i<n; i++){
        if(temp>arr[i]){
            temp = arr[i];
        }
    }
    return temp;
}
int main() {
	int t;
	cin>>t;
	for(int i= 0; i<t; i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int j =0;j<n; j++){
	        cin>>arr[j];
	    }
	    int mini = minimum(arr,n);
	    int profit = 0;
	    for(int j = 0; j<n; j++){
	        profit = profit+ arr[j];
	        
	    }
	    if(mini>0){
	        cout<<profit-mini<<endl;
	    }
	    else{
	        if(profit<0){
	            cout<<profit-mini<<endl;
	        }
	        else{
	            cout<<profit-mini<<endl;
	        }
	    }
	}
	return 0;
}
