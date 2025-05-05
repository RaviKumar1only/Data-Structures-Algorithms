#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Not in power of 2" << endl;
        return 0;
    }

    while (num != 1) {
        if (num % 2 != 0) {
            cout << "Not in power of 2" << endl;
            return 0;
        }
        num = num / 2;
    }

    cout << "Number is in power of 2" << endl;
    return 0;
}