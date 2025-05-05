#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter numbers of rows: ";
    cin>>rows;

    for(int row=1; row<=rows; row++) {
        //printing the spaces
        for(int space=1; space<=row-1; space++){
            cout<<" ";
        }
        // printing the stars
        for(int star1=1; star1<=rows-row+1; star1++) {
            cout<<"*";
        }
        //printing the stars
        for(int star2=1; star2<=rows-row; star2++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}