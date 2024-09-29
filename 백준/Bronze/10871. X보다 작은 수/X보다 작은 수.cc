#include <iostream>
using namespace std;
int main() {
    int N, X;
    cin >> N >> X;
    int num[10000] = {};

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    for (int k = 0; k < N; k++) {
        if (num[k] < X) {
            cout << num[k]<< " ";
        }
    }

    return 0;

}