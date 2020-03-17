#include <iostream>
using namespace std;

int main() {
    
    int C,N,sum,avg;
    double R;
    int S[1000];
    cin >> C;
    cout << fixed;
    cout.precision(3);

    for (int i = 0; i < C; i++) {
        cin >> N;
        avg, sum=0;
        R = 0;

        for (int j = 0; j < N; j++) {
            cin >> S[j];
            sum += S[j];
        }

        avg = sum / N;
        for (int k = 0; k < N; k++) {
            if (S[k] > avg)
                R++;
        }
        cout << double(R / N * 100) << "%" << endl; 
   
   }

    return 0;
}

