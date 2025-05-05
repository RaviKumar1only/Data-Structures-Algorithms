#include<iostream>
using namespace std;

int main() {
    int rows, cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number columns: ";
    cin>>cols;

    for(int row=1; row<=rows; row++) {
        for(int col=1; col<=cols; col++) {
            // cout<<char(65+i-1)<<" ";
            cout<<char('a'+row-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}