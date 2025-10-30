
#include <iostream>
using namespace std;

int main() {
    int N, M;

    while (true) {
        cin >> N >> M;

        if (N <= 0 || M <= 0)
            break;

        if (N > M) {
            int temp = N;
            N = M;
            M = temp;
        }

        int sum = 0;

        for (int i = N; i <= M; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}
