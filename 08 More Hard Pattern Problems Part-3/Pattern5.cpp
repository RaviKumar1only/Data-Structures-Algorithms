#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int row=1; row<=rows; row++) {
        //printing the spaces
        for(int space=1; space<=rows-row; space++) {
            cout<<" ";
        }
        //printing the row no. -> in reverse
        for(int col=row; col>=1; col--) {
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}