#include <iostream>
using namespace std;

void print (int i) {
  if (i == 0) 
    return;
  cout << i << " ";
  print(i - 1);
}

int main() {
  int N = 5;
  print(N);
  return 0;
}
