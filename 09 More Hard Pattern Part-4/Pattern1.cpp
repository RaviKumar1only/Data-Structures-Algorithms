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
        //printing the stars
        for(int star1=1; star1<=row; star1++) {
            cout<<"*";
        }
        //printing the stars again
        for(int star2=1; star2<=row-1; star2++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}