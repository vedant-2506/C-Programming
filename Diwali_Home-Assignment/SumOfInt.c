//Sum all integers from 1 to n using a while loop.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum from 1 to " << n << " = " << sum;

    return 0;
}
