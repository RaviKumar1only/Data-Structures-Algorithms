#include<iostream>
using namespace std;

int main() {
    int rows, cols;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number columns: ";
    cin>>cols;

    for(int row=1; row<=rows; row++) {
        for(int col=cols; col>=1; col--) {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}