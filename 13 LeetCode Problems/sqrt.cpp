#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int ans = 0;
    for (int i = 0; i*i <= num; i++) {
        ans = i;
    }

    cout << "Square root (integer part): " << ans << endl;
    return 0;
}