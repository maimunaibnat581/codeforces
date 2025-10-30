L:-

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int a = A, b = B;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << a << endl;

    return 0;
}
