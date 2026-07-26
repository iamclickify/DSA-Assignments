#include <iostream>
using namespace std;

int main() {
    int n;
    int score[n];

    cout<<"Enter number of scores: "<<endl;
    cin>>n;


    cout<<"Enter scores: "<<endl;

    for(int i = 0; i<n; i++)
        cin >> score[i];

    for(int i = 0; i<n-1; i++) {
        for(int j = 0; j<n-i-1; j++) {
            if(score[j] > score[j+1]) {
                int temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }

    cout << "Sorted scores: "<<endl;

    for(int i = 0; i<n; i++)
        cout<<score[i]<<endl;

    return 0;
}






























// nums = [4 , 3 , 5 ,1]
// 1 3 4 5

// 4 3 5 1
// i
// j j+1
// for i = 0 iteration
// if j > j+1
// swap

// 3 4 5 1
//   i
//   j j+1
// skip

// 3 4 5 1
//     i
//     j j+1
// j > j+1
// swap


// 3 4 1 5
// 3 1 4 5
// 1 3 4 5

// Total number of iterations
// nums = [4 3 5 1] n = 4
// 3 4 5 1
// 3 4 1 5
// 3 1 4 5
// 1 3 4 5
// TC = O(n^2)





























