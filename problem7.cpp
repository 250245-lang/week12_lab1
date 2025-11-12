#include <iostream>
using namespace std;

int findLargestElement(int* arr, int size) {
    int* maxValPt = arr;
    for (int i = 0; i<size; i++) {
        int* pt = arr+i;
        if (*pt > *maxValPt) maxValPt = pt;
    }
    return *maxValPt;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxVal = findLargestElement(arr, n);
    cout << maxVal << endl;
    return 0;
}