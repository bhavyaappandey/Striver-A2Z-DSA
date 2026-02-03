#include <iostream>
using namespace std;

int main(){
  
  // Factorial using while loop:
  int n1 = 5;
  int fact1 = 1; 

  int temp1 = n1; // Preserve original value
  while (temp1>0){
    fact1 *= temp1; // Find fact starting with n with decre n
    temp1--;
  }

  cout << "Factorial of 5 is: " << fact1 << endl; // Print fact

  // Factorial using do while loop:
  int n2 = 5;
  int fact2 = 1;

  int temp2 = n2; // Preserve original value
  do {
    fact2 *= temp2;
    temp2--;
  }
    while (temp2>0);

    cout << "Factorial of 5 is: " << fact2 << endl;
  
  return 0; 
}
