/*
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
*/
#include <iostream>
using namespace std;
int main(){
   float temperature[3][7];
   string city[3];

   for(int i=0; i<3; i++){
       cout<<"Enter City "<<i+1<<": "<<endl;
       cin>>city[i];
   }
   for(int i=0; i<3; i++){
       cout<<"Enter temperature (in degree celsius)  for "<<city[i]<<endl;
       for(int j=0; j<7; j++){
           cout<<"Day "<<j+1<<": "<<endl;
           cin>>temperature[i][j];
       }
   }

   cout << "City\t\tD1\tD2\tD3\tD4\tD5\tD6\tD7\tWeekly Average\n";
   for(int i = 0; i<3; i++) {
       float sum = 0;
       cout<<city[i]<<"\t\t";
       for(int j = 0; j<7; j++) {
           cout<<temperature[i][j]<<"\t";
           sum += temperature[i][j];
       }
       cout<<sum / 7 <<endl;
   }
   cout<<"Daily average \t";
   for(int j = 0; j<7; j++){
	   float sum = 0;
       for(int i = 0; i<3; i++){
           sum += temperature[i][j];
       }
       cout<<sum / 3<<"\t";
   }
   return 0;
}

