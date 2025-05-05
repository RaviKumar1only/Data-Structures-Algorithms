#include<iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    //for handing the even numbers
    if(rows%2==0) {
        rows=rows+1;
    }

    //printng the upper half
    for(int upperRow=1; upperRow<=(rows/2+1); upperRow++) {
        //printing the upper half left stars
        for(int upperLeftStars=1; upperLeftStars<=upperRow; upperLeftStars++) {
            cout<<"*";
        }
        //printing the upper half spaces
        for(int upperSpaces=1; upperSpaces<=(rows/2+1-upperRow)*2; upperSpaces++) {
            cout<<" ";
        }
        //printing the upper half right stars
        for(int upperRightStars=1; upperRightStars<=upperRow; upperRightStars++) {
            cout<<"*";
        }
        cout<<endl;
    }

    //printing the lower half
    for(int lowerRow=1; lowerRow<=(rows/2); lowerRow++) {
        //printing the lower half left stars
        for(int lowerLeftStars=(rows/2-lowerRow+1); lowerLeftStars>=1; lowerLeftStars--) {
            cout<<"*";
        }
        // printing the lower half spaces
        for(int lowerSpaces=1; lowerSpaces<=lowerRow*2; lowerSpaces++) {
            cout<<" ";
        }
        //printing the lower half stars
        for(int lowerRightStars=(rows/2-lowerRow+1); lowerRightStars>=1; lowerRightStars--) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}