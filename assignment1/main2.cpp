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
       cout<<"Enter temperature for "<<city[i]<<endl;
       for(int j=0; j<7; j++){
           cout<<"Day "<<j+1<<": "<<endl;
           cin>>temperature[i][j];
       }
   }

   cout << "\n------------------------------------------------------------------------------------------\n";
   cout << "City\t\tD1\tD2\tD3\tD4\tD5\tD6\tD7\tWeekly Average\n";
   cout << "------------------------------------------------------------------------------------------\n";

   for(int i = 0; i<3; i++) {

       float sum = 0;

       cout<<city[i]<<"\t\t";

       for(int j = 0; j<7; j++) {
           cout<<temperature[i][j]<<"\t";
           sum += temperature[i][j];
       }

       cout<<sum / 7 <<endl;
   }

   cout<<"--------------------------------------------------------------------------------------------"<<endl;
   cout<<"Daily average \t";
   for(int j = 0; j<7; j++){
       float day_sum = 0;

       for(int i = 0; i<3; i++){
           day_sum += temperature[i][j];
       }

       cout<<day_sum / 3<<"\t";
   }

   cout<<"\n--------------------------------------------------------------------------------------------"<<endl;;

   return 0;
}





