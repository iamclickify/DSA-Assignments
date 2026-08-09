#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no of levels: "<<endl;
	cin>>n;
	int arr1[n], arr2[n];
	cout<<"Enter score for player 1: "<<endl;
	for(int i= 0; i<n; i++){
		cin>>arr1[i];
		cout<<arr1[i]<<endl;
	}
	cout<<"Enter score for player 2: "<<endl;
	for(int i= 0; i<n; i++){
		cin>>arr2[i];
		cout<<arr2[i]<<endl;
	}
	// Bubble sorting array for player 1
	for(int i = 0; i<n-1; i++) {
	    for(int j = 0; j<n-i-1; j++) {
	        if(arr1[j] > arr1[j+1]) {
	            int temp = arr1[j];
	           	arr1[j] = arr1[j+1];
	            arr1[j+1] = temp;
	        }
	    }
	    cout<<"\n Pass "<<i+1<<":- ";
	    for(int k= 0; k<n; k++){
	    	cout<<arr1[k]<<" ";
	    }
	}
	// Displaying array for player 1
	cout<<"\n Sorted array of score for player 1 is: ";
	for(int i= 0; i<n; i++){
		cout<<arr1[i]<<" ";
	}
	// Bubble sorting array for player 2
	for(int i = 0; i<n-1; i++) {
		for(int j = 0; j<n-i-1; j++) {
		    if(arr2[j] > arr2[j+1]) {
		        int temp = arr2[j];
		        arr2[j] = arr2[j+1];
		        arr2[j+1] = temp;
		    }
		}
		cout<<"\n Pass-: "<<i+1<<":- ";
		for(int k= 0; k<n; k++){
		    cout<<arr2[k]<<" ";
		}
	}
	// Displaying array for player 2
	cout<<"\n Sorted array of score for player 2 is: ";
	for(int i= 0; i<n; i++){
		cout<<arr2[i]<<" ";
	}
	if(arr1[n-1] > arr2[n-1]){
		cout<<"\n Player 1 wins!!! <3"<<endl;
	}
	else if(arr1[n-1] < arr2[n-1]){
		cout<<"\n Player 2 wins!!! <3"<<endl;
	}
	else{
		cout<<"\n It is a tie! :( "<<endl;
	}
	return 0;
}
