#include <iostream>
using namespace std;

int main() {
    int N = 0;
    float tot = 0;
    float S[1000];

    cin >> N;

    int max = 0;

    for (int i = 0; i < N; i++) {
        cin >> S[i];
        if (S[i] > max) {
            max = S[i];
        }
    }

    for (int j = 0; j < N; j++) {
        S[j] = S[j] / max * 100;
        tot += S[j];
    }
 
    cout << tot / N;

    return 0;
}

