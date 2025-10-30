

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int num = 2; num <= N; num++) {
        int prime = 0;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                prime = 1;
                break;
            }
        }

        if (prime == 0) {
            cout << num << " ";
        }
    }

    return 0;
}
