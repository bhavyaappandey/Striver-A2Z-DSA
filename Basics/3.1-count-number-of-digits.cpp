#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N = 329823;
    cout << "N: " << N << endl;

    int digits;

    // Safe case for N = 0:
    if (N == 0)
        digits = 1;
    else
        digits = (int)(log10(abs(N)) + 1);  // abs for negative numbers

    cout << "Number of Digits in N: " << digits << endl;

    return 0;
}
