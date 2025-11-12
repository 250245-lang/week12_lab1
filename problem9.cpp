#include <iostream>
using namespace std;

void factorial(int n, int *fact) {
    *fact = 1;
    for (int i = 1; i <= n; i++) {
        *fact *= i;
    }
}

int main() {
    int n, factorialOfN;
    cin >> n;
    factorial(n, &factorialOfN);
    cout << factorialOfN << endl;
    return 0;
}