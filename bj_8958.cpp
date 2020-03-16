#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int T;
    cin >> T;

    char Q[80];
    int A[80];

    for (int i = 0; i < T; i++) {
        cin >> Q;
        int a = 0;
        int sum = 0;
        for (int j = 0; j < strlen(Q); j++) {

            if (Q[j] == 'O') {
                A[j] = 1;
                if (a != 0) {
                    A[j] += a;
                }
                a++;
            }
            else {
                A[j] = 0;
                a = 0;
            }
            sum += A[j];
        }
        cout << sum<<endl;
    }
    return 0;
}

