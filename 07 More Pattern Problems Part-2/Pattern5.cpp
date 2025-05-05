#include<iostream>
using namespace std;

int main() {
    int rows, cols;
    cout<<"Enter number rows: ";
    cin>>rows;
    
    for(int row=1; row<=rows; row++) {
        for(int col=1; col<=row; col++) {
            cout<<char('a'+row-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}