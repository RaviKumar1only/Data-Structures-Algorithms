#include<iostream>
using namespace std;

int main() {
    int rows, cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;

    for(int row=1; row<=rows; row++) {
        for(int col=1; col<=cols; col++) {
            cout<<1;
        }
        cout<<endl;
    }
    return 0;
}