#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n = 153;
  int original = n;
  int digits = 0;
  int temp = n;
  
  while (temp > 0) {
    digits++;
    temp /= 10;
    }

  int sum = 0;
  temp = n;

  while (temp > 0) {
    int lastDigit = temp % 10;
    sum += pow(lastDigit, digits);
    temp /= 10;
    }

  if (sum == original)
    cout << "Armstrong Number" << endl;
  else
    cout << "Not Armstrong Number" << endl;

  return 0;
}
