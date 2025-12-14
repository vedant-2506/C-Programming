//Print a multiplication table for a given number using a while loop.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;

    cout << "Multiplication Table of " << n << ":\n";

    while (i <= 10) {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }

    return 0;
}
