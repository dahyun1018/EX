#include <iostream>
using namespace std;

int main() {
    
    int a, b, c, tot,num;
    int arr[10] = { 0 };

    cin >> a >> b >> c;
    tot = a * b * c;

    while (tot != 0) {
        num = tot % 10;
        arr[num]++;
        tot /= 10;
    }
    for (int i = 0; i < 10; i++)
        cout << arr[i]<<"\n";

    return 0;
}

