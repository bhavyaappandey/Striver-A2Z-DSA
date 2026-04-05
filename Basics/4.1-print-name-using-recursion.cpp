#include <iostream>
using namespace std;

void printName (string name, int count, int N) {
  if (count == N)
    return;
  cout << name << endl;
  printName(name, count + 1, N);
}
int main() {
  int N = 5;
  string name = "Ashish";
  printName(name, 0, N);
  return 0;
}
