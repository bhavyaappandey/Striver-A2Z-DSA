#include <iostream>
using namespace std;

int main() {
  
  // 1-D array:
  int arr1[5] = {10, 20, 30, 40, 50};
  int n = 5;
  
  for (int i = 0; i < n; i++) {
      cout << arr1[i] << " ";
  } 

  // 2-D array:  
  int arr2[2][3] = {
      {1, 2, 3},
      {4, 5, 6}
  };

  for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 3; j++) {
          cout << arr2[i][j] << " ";
      }
      cout << endl;
  }

  // Creating a string:
  string s = "Hello World";

  // Length of string: s.length() or s.size()
  cout << "Length: " << s.length() << endl;

  // Access each character: s[i]
  cout << "Characters:" << endl;
  for (int i = 0; i < s.length(); i++) {
      cout << s[i] << endl;
  }

  return 0;
}
