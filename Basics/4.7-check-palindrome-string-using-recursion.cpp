#include <iostream>
using namespace std;

bool isPalindrome (string s, int l, int r) {
  if (l >= r) 
    return true;
  if (s[l] != s[r]) 
    return false;
  return isPalindrome (s, l + 1, r - 1);
}

int main() {
  string s = "madam";
  if (isPalindrome(s, 0, s.size() - 1))
    cout << "Palindrome";
  else
    cout << "Not Palindrome";
  return 0;
}
