#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N = 36;
  vector<int> divisors;
  for (int i = 1; i <= N; i++) {
    if (N % i == 0)
        divisors.push_back(i);
  }
  cout << "Divisors of " << N << ": ";
  for (int val : divisors) {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}
