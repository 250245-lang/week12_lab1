#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int temp;
    for (int i = 0; i < size/2; i++) {
        temp = *(arr+i);
        *(arr+i) = *(arr+size-i-1);
        *(arr+size-i-1) = temp;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}