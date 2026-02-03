#include <iostream>
using namespace std;

int main() {

    // Simple For Loop:
    cout << "Simple For Loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    // Nested For Loop:
    cout << "Nested For Loop:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    cout << endl;

    // For loop with if-else:
    cout << "For loop with if-else:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i << " is Even" << endl;
        } else {
            cout << i << " is Odd" << endl;
        }
    }

    return 0;
}
