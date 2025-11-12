#include <iostream>
using namespace std;

void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    minVal = INT_MAX;
    maxVal = INT_MIN;
    for (int i = 0; i < size; i++) {
        int val = *(arr+i);
        if (val < minVal) minVal = val;
        if (val > maxVal) maxVal = val;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxVal, minVal;
    findMinMax(arr, n, maxVal, minVal);
    cout << "min=" << minVal << "\nmax=" << maxVal << endl;
    return 0;
}