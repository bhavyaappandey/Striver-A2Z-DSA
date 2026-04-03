#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n = 121;
  int original = n;
  int revNum = 0;

  // If the number is negative:
  if (n < 0) {
    cout << "Not Palindrome" << endl;
    return 0;
    }

  while (n > 0) {
    int lastDigit = n % 10;
    revNum = revNum * 10 + lastDigit;
    n = n / 10;
    }

  if (original == revNum)
    cout << "Palindrome" << endl;
  else
    cout << "Not Palindrome" << endl;

  return 0;
}
