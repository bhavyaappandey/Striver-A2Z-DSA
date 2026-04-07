// File: frequency_max_min.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<bool> visited(n, false);

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < n; i++) {

        if (visited[i] == true)
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }

        // Maximum frequency:
        if (count > maxFreq) {
            maxFreq = count;
            maxEle = arr[i];
        }

        // Minimum frequency:
        if (count < minFreq) {
            minFreq = count;
            minEle = arr[i];
        }
    }

    cout << "The highest frequency element is: " << maxEle << endl;
    cout << "The lowest frequency element is: " << minEle << endl;

    return 0;
}
