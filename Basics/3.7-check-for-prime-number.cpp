#include <iostream>
using namespace std;

int main() {
  int N = 19;
  bool isPrime = true;
  if (N <= 1)
    isPrime = false;
  else
    for (int i = 2; i * i <= N; i++) {
      if (N % i == 0) {
        isPrime = false;
        break;
      }
    }
  if (isPrime)
    cout << "Prime Number" << endl;
  else
    cout << "Not Prime Number" << endl;
  return 0;
}
