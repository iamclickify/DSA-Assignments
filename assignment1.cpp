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

    cout<<"City\t\tM1\tM2\tM3\tM4\tAverage"<<endl;

    for(int i=0; i<3; i++){

        float sum = 0;

        cout<<city[i]<<"\t\t";

        for(int j=0; j<4; j++){
            cout<<rainfall[i][j]<<"\t";
            sum = sum + rainfall[i][j];
        }

        cout<<sum/4<<endl;
    }

    return 0;
}

/*
Temperature Tracker:
Write a program for Tracking daily temperatures of 3 cities for a week . The program calculates
the average temperature for each day and for the week.
*/ 

#include <iostream>
using namespace std;

int main() {

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

    cout<<"City\t\tD1\tD2\tD3\tD4\tD5\tD6\tD7\tWeekly average"<<endl;

    for(int i=0; i<3; i++){

        float sum = 0;

        cout<<city[i]<<"\t\t";

        for(int j=0; j<7; j++){
            cout<<temperature[i][j]<<"\t";
            sum = sum + temperature[i][j];
        }

        cout<<sum/7<<endl;
    }

    return 0;
}