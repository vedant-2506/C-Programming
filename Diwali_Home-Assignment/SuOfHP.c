//Calculate and print the sum of the series 1 + 1/2 + 1/3 + ... + 1/n using a for loop

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    cout << "Sum of the series = " << sum;

    return 0;
}
