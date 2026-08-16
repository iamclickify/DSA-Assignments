#include<iostream>
using namespace std;

const int servers=10;
const int slots=10;

void accept_table(int table[slots][servers]){
    for(int i=0;i<slots;i++){
        for(int j=0;j<servers;j++){
            table[i][j]=-1;
        }
    }
}

void display_table(int table[slots][servers]){
    cout<<"\n----------------------Load balancing table--------------------\n"<<endl;
    cout<<"Slot/Server\t";

    for(int j=0;j<servers;j++){
        cout<<"S"<<j<<"\t";
    }

    cout<<"\n";
    for(int i=0;i<slots;i++){
        cout<<i<<"\t\t";
        for(int j=0;j<servers;j++){
            cout<<table[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n-1 = Empty Slot "<<endl;
}

void linear_probing(int table[slots][servers],int request,int server){
    int startPosition=server;

    for(int i=0;i<servers*slots;i++){
        int position=(startPosition+i)%(servers*slots);
        int row=position/servers;
        int col=position%servers;

        if(table[row][col]==-1){
            table[row][col]=request;

            cout<<"Request "<<request<<" placed at Server "<<col<<", Slot "<<row<<endl;
            cout<<"Position found!"<<endl;

            return;
        }
    }

    cout<<"Position not found! Table is full."<<endl;
}

void sequential_chaining(int table[slots][servers],int request,int server){
    for(int row=0;row<slots;row++){
        if(table[row][server]==-1){
            table[row][server]=request;

            cout<<"Request "<<request<<" chained to Server "<<server<<", Slot "<<row<<endl;

            return;
        }
    }

    cout<<"No empty slot available in Server "<<server<<endl;
}

int main(){
    int table[slots][servers];

    accept_table(table);

    int n;

    cout<<"Enter no of client requests: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        int request;

        cout<<"Enter Request ID "<<i+1<<": "<<endl;
        cin>>request;

        int server=request%servers;

        cout<<"Hash value = "<<request<<" % "<<servers<<" = "<<server<<endl;

        if(table[0][server]==-1){
            table[0][server]=request;
            cout<<"No collision.\n";
            cout<<"Request "<<request<<" assigned to Server "<<server<<", Slot 0"<<endl;
        }
        else{
            cout<<"\nCollision has occured! \n";

            int choice;

            cout<<"Choose collision handling technique:\n";
            cout<<"1. Linear probing\n";
            cout<<"2. Sequential chaining\n";
            cout<<"Enter choice: ";
            cin>>choice;

            if(choice==1){
                linear_probing(table,request,server);
            }
            else if(choice==2){
                sequential_chaining(table,request,server);
            }
            else{
                cout<<"Invalid choice!\n";
                i--;
                continue;
            }
        }
    }

    display_table(table);

    return 0;
}