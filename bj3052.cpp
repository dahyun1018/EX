#include <iostream>
using namespace std;

int main() {
    int A, count = 0;
    int R[42] = { 0, };
    
    for (int i = 0; i < 10; i++) {
        cin >> A;
        R[A % 42] = 1;
    }

    for (int i = 0; i < 42; ++i)
        count += R[i];

    cout << count;


    return 0;
}

