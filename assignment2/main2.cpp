#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter number of cards: "<<endl;
    cin>>n;

    int cards[n];

    cout<<"Enter the cards: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>cards[i];
    }

    for(int i = 1; i<n; i++){

        int key = cards[i];
        int j = i - 1;

        while(j >= 0 && cards[j] > key){
            cards[j+1] = cards[j];
            j--;
        }

        cards[j + 1] = key;

        cout<<"After insertion "<<i<<": ";

        for(int k = 0; k<=i; k++){
            cout<<cards[k]<<" ";
        }

        cout<<endl;
    }

    cout<<"Final sorted : "<<endl;

    for(int i = 0; i<n; i++){
        cout<<cards[i]<<" ";
    }

    cout<<endl;

    return 0;
}
