/*                                                     ASSIGNMENT NO: 01
TITLE:Rainfall Tracking OR Temperature Tracker

OBJECTIVE: To implement Multidimensional Array.

PROBLEM STATEMENT:
Write a program to track rainfall data for 3 cities over 4 months. Using a 2D array, we can store
the data, calculate the average rainfall for each city, and display the rainfall data in a tabular
format.

*/

#include <iostream>
using namespace std;

int main() {

    float rainfall[3][4];
    string city[3];

    for(int i=0; i<3; i++){
        cout<<"Enter City "<<i+1<<": "<<endl;
        cin>>city[i];
    }


    for(int i=0; i<3; i++){
        cout<<"Enter rainfall for "<<city[i]<<endl;

        for(int j=0; j<4; j++){
            cout<<"Month "<<j+1<<": "<<endl;
            cin>>rainfall[i][j];
        }
    }

    cout << "\n-------------------------------------------------------------\n";
    cout << "City\t\tM1\tM2\tM3\tM4\tAverage\n";
    cout << "-------------------------------------------------------------\n";

    for(int i = 0; i<3; i++) {

        float sum = 0;

        cout<<city[i]<<"\t\t";

        for(int j = 0; j<4; j++) {
            cout<<rainfall[i][j]<<"\t";
            sum += rainfall[i][j];
        }

        cout<<sum / 4 <<endl;
    }

    cout<<"-------------------------------------------------------------\n";

    return 0;
}
