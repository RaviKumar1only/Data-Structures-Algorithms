#include<iostream>
using namespace std;

int main() {
    int rows, cols;
    cout<<"Enter number rows: ";
    cin>>rows;
    
    for(int row=1; row<=rows; row++) {
        for(int col=row; col>=1; col--) {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}