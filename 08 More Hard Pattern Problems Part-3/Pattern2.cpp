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
        for(int star=1; star<=row; star++) {
            cout<<row;
        }
        cout<<endl;
    }
    return 0;
}