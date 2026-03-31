#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 5;

    // Pattern 1: Square
    cout << "Pattern 1:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 2: Right Triangle 
    cout << "Pattern 2:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3: Number Triangle
    cout << "Pattern 3:\n";
    for (int i = 1; i <= N; i++) {
          for (int j = 1; j <= i; j++) {
              cout << j << " ";
          }
          cout << endl;
    }
    cout << endl;

    // Pattern 4: Number Triangle (same numbers in a row)
    cout << "Pattern 4:\n";
    for (int i = 1; i <= N; i++) {
          for (int j = 1; j <= i; j++) {
              cout << i << " ";
          }
          cout << endl;
    }
    cout << endl;

  // Pattern 5: Inverse Right Triangle
  cout << "Pattern 5:\n";
  for (int i = N; i >= 1; i--){
      for (int j = 1; j <= i; j++){
          cout << "*" << " ";
      }
      cout << endl;
  }
  cout << endl;

  // Pattern 6: Inverse Number Right Triangle
  cout << "Pattern 6:\n";
  for (int i = N; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

  // Pattern 7: Centered Pyramid
  cout << "Pattern 7:\n";
  for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2*i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
  
  // Pattern 8: Inverse Centered Pyramid
  cout << "Pattern 8:\n";
  for (int i = N; i >= 1; i--) {
      for (int j = 1; j <= N - i; j++) {
          cout << " ";
      }
      for (int j = 1; j <= (2*i - 1); j++) {
          cout << "*";
      }
      cout << endl;
  }
  cout << endl;

  // Pattern 9: Full Diamond
  cout << "Pattern 9:\n";
  for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= N - i; j++) {
          cout << " ";
      }
      for (int j = 1; j <= (2*i - 1); j++) {
          cout << "*";
      }
      cout << endl;
  }
  for (int i = N-1; i >= 1; i--) {
      for (int j = 1; j <= N - i; j++) {
          cout << " ";
      }
      for (int j = 1; j <= (2*i - 1); j++) {
          cout << "*";
      }
      cout << endl;
  }
  cout << endl;

  // Pattern 10: Left-aligned Diamond
  cout << "Pattern 10:\n";
  for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= i; j++) {
          cout << "* ";
      }
      cout << endl;
  }

  for (int i = N-1; i >= 1; i--) {
      for (int j = 1; j <= i; j++) {
          cout << "* ";
      }
      cout << endl;
  }
  cout << endl;

return 0;
}

