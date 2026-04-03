#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n = 12345;
  int sign = (n < 0) ? -1 : 1;  // handle negatives
  n = abs(n);
  int revNum = 0;
  while (n > 0) {
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    revNum *= sign;
    cout << revNum << endl;
    return 0;
}
