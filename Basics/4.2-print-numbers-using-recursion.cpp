#include <iostream>
using namespace std;

void print (int i, int N) {
  if (i > N)
    return;
    cout << i << " ";
    print(i + 1, N);
}

int main() {
  int N = 5;
  print(1, N);
  return 0;
}
