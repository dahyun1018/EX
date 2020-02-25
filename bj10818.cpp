#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    int* p = new int[t];
    int max = -1000000;
    int min = 1000000;

    for (int i = 0; i < t; i++) {
        cin >> p[i];
        if (max < p[i])
            max = p[i];
        if (min > p[i])
            min = p[i];
    }

    cout << min << " " << max;

    delete[]p;
    return 0;
}

