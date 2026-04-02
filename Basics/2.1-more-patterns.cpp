#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 5;

    // Pattern 11: Binary Triangle
    cout << "Pattern 11:\n";
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    cout << endl;

  
    // Pattern 12: Palindromic Number Pyramid (with spacing)
    cout << "Pattern 12:\n";
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = 1; j <= 2 * (N - i); j++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;

  
    // Pattern 13: Floyd’s Triangle (continuous number triangle)
    cout << "Pattern 13:\n";
    int num = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

  
    // Pattern 14: Increasing Alphabet Triangle
    cout << "Pattern 14:\n";
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;

  
    // Pattern 15: Decreasing Alphabet Triangle
    cout << "Pattern 15:\n";
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;

  
    // Pattern 16: Repeating Alphabet Triangle
    cout << "Pattern 16:\n";
    for (int i = 1; i <= N; i++) {
        char ch = 'A' + i - 1;  
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;

  
    // Pattern 17: Centered Alphabet Palindrome Pyramid 
    cout << "Pattern 17:\n";
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }
        for (int j = 1; j <= 2*(N - i); j++) {
            cout << " ";
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
    cout << endl;

  
    // Pattern 18: Alphabet Increasing Triangle (reverse start)
    cout << "Pattern 18:\n";
    for (int i = 1; i <= N; i++) {
        char ch = 'A' + (N - i);
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

  
    // Pattern 19: Hollow Inside Butterfly (with filled edges)
    cout << "Pattern 19:\n";
  
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1 || j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }
        for (int j = 1; j <= 2 * (N - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            if (i == 1 || j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = N-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (i == 1 || j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }
        for (int j = 1; j <= 2 * (N - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            if (i == 1 || j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

  
    // Pattern 20: Filled Butterfly Star Pattern
    cout << "Pattern 20:\n";
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (N - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = N-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (N - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;


    // Pattern 21: Hollow Square
    cout << "Pattern 21:\n";
     for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == N || j == 1 || j == N)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    
  // Pattern 22: Concentric Square Number Pattern
  cout << "Pattern 22:\n";
  int size = 2 * N - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int val = N - min(min(top, bottom), min(left, right));

            cout << val << " ";
        }
        cout << endl;
    }
    cout << endl;
  
    return 0;
}
