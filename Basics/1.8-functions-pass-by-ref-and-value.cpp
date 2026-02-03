#include <iostream>
using namespace std;

// Pass by value:
void modifyval(int a) {
    a = a + 10;
}
    
// Pass by refernce:
void modifyref(int &a) {
    a = a + 10;
}

int main() {
  int x = 5;

  // Pass by value:
  modifyval(x);
  cout << "Output after pass by value is: " << x << endl; // Output: 5

  // Pass by reference:
  modifyref(x);
  cout << "Output after pass by reference is: " << x << endl; // Output: 15
  
  return 0;
}
