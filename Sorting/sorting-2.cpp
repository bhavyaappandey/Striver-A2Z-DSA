#include <bits/stdc++.h>
using namespace std;

int main() {

    // Merge Sort:
    vector<int> arr1 = {5, 2, 8, 4, 1};

    function<void(int,int)> mergeSort = [&](int low, int high) {
        if (low >= high) 
            return;
        int mid = (low + high) / 2;

        mergeSort(low, mid);
        mergeSort(mid + 1, high);

        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr1[left] <= arr1[right])
                temp.push_back(arr1[left++]);
            else
                temp.push_back(arr1[right++]);
        }

        while (left <= mid) 
            temp.push_back(arr1[left++]);
        while (right <= high) 
            temp.push_back(arr1[right++]);

        for (int i = low; i <= high; i++)
            arr1[i] = temp[i - low];
    };

    mergeSort(0, arr1.size() - 1);

    cout << "After Merge Sort:\n";
    for (int x : arr1) 
        cout << x << " ";
    cout << "\n\n";


    // Recursive Bubble Sort:
    int arr2[] = {13, 46, 24, 52, 20, 9};
    int n2 = 6;

    function<void(int)> bubble = [&](int n) {
        if (n == 1) 
            return;

        for (int j = 0; j <= n - 2; j++) {
            if (arr2[j] > arr2[j + 1])
                swap(arr2[j], arr2[j + 1]);
        }
        bubble(n - 1);
    };

    bubble(n2);

    cout << "After Recursive Bubble Sort:\n";
    for (int i = 0; i < n2; i++) 
        cout << arr2[i] << " ";
    cout << "\n\n";


    // Recursive Insertion Sort:
    int arr3[] = {13, 46, 24, 52, 20, 9};
    int n3 = 6;

    function<void(int)> insertion = [&](int i) {
        if (i == n3) 
            return;

        int j = i;
        while (j > 0 && arr3[j - 1] > arr3[j]) {
            swap(arr3[j], arr3[j - 1]);
            j--;
        }
        insertion(i + 1);
    };

    insertion(0);

    cout << "After Recursive Insertion Sort:\n";
    for (int i = 0; i < n3; i++) 
        cout << arr3[i] << " ";
    cout << "\n\n";


    // Quick Sort:
    vector<int> arr4 = {10, 7, 8, 9, 1, 5};

    function<int(int,int)> partition = [&](int low, int high) {
        int pivot = arr4[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr4[j] <= pivot) {
                i++;
                swap(arr4[i], arr4[j]);
            }
        }
        swap(arr4[i + 1], arr4[high]);
        return i + 1;
    };

    function<void(int,int)> quickSort = [&](int low, int high) {
        if (low < high) {
            int p = partition(low, high);
            quickSort(low, p - 1);
            quickSort(p + 1, high);
        }
    };

    quickSort(0, arr4.size() - 1);

    cout << "After Quick Sort:\n";
    for (int x : arr4) 
        cout << x << " ";
    cout << "\n";

    return 0;
}
