#include <iostream>
using namespace std;

int main() {
    int a, b;
    int x, y;
    int n = 1;
    
    cin >> a;

    x = a / 10;
    y = a % 10;
    b = y * 10 + (x + y) % 10;

    while (a != b) {
        x = b / 10;
        y = b % 10;
        b = y * 10 + (x + y) % 10;
        n++;
    }

    cout << n;
   
    return 0;
}

