#include <iostream>
using namespace std;


int main() {
    int* ptrA;
    int numbers[10] = {5, 3, 8, 4, 6, 3, 6, 8, 9, 0};
    ptrA = numbers;
    for (int i = 0; i < 10; i++) {
        cout << "address=" << ptrA << " value=" << *ptrA++ << endl;
    }
    return 0;
}