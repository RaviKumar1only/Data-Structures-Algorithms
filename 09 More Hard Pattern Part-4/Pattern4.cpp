#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    //upper side
    for(int upper=1; upper<=rows/2; upper++) {
        //printing stars
        for(int star1=1; star1<=rows/2-upper+1; star1++) {
            cout<<"*";
        }
        //printing spaces
        for(int space1=1; space1<=2*(upper-1); space1++) {
            cout<<" ";
        }
        // printing star
        for(int star2=1; star2<=rows/2-upper+1; star2++) {
            cout<<"*";
        }
        cout<<endl;
    }


    // lower side
    for(int lower=1; lower<=rows/2; lower++) {
        //printing stars
        for(int star3=1; star3<=lower; star3++) {
            cout<<"*";
        }
        //printing spaces
        for(int space2=1; space2<=2*(rows/2-lower); space2++) {
            cout<<" ";
        }
        //printing the stars
        for(int star4=1; star4<=lower; star4++) {
            cout<<"*";
        }
        cout<<endl;
    }

    
    return 0;
}