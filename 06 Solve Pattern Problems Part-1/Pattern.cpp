#include<iostream>
using namespace std;

int main() {
    int cols;
    cout<<"Enter number of columns: ";
    cin>>cols;

    for(int row=1; row<=cols; row++) {
        cout<<"* ";
    }
    return 0;
}