#include <bits/stdc++.h>
using namespace std;

int main() {

    // Selection Sort:
    int arr1[] = {13, 46, 24, 52, 20, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "Before Selection Sort:\n";
    for (int i = 0; i < n1; i++) 
      cout << arr1[i] << " ";
    cout << "\n";

    for (int i = 0; i < n1 - 1; i++) {
        int mini = i;
        for (int j = i + 1; j < n1; j++) {
            if (arr1[j] < arr1[mini]) 
              mini = j;
        }
        swap(arr1[i], arr1[mini]);
    }

    cout << "After Selection Sort:\n";
    for (int i = 0; i < n1; i++) 
      cout << arr1[i] << " ";
    cout << "\n\n";


    // Bubble Sort:
    vector<int> arr2 = {13, 46, 24, 52, 20, 9};

    cout << "Before Bubble Sort:\n";
    for (int x : arr2) 
      cout << x << " ";
    cout << "\n";

    int n2 = arr2.size();
    for (int i = n2 - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr2[j] > arr2[j + 1])
                swap(arr2[j], arr2[j + 1]);
        }
    }

    cout << "After Bubble Sort:\n";
    for (int x : arr2) 
      cout << x << " ";
    cout << "\n\n";

  
    // Insertion Sort:
    vector<int> arr3 = {13, 46, 24, 52, 20, 9};

    cout << "Before Insertion Sort:\n";
    for (int x : arr3) 
      cout << x << " ";
    cout << "\n";

    int n3 = arr3.size();
    for (int i = 1; i < n3; i++) {
        int key = arr3[i];
        int j = i - 1;
        while (j >= 0 && arr3[j] > key) {
            arr3[j + 1] = arr3[j];
            j--;
        }
        arr3[j + 1] = key;
    }

    cout << "After Insertion Sort:\n";
    for (int x : arr3) 
      cout << x << " ";
    cout << "\n";

    return 0;
}
