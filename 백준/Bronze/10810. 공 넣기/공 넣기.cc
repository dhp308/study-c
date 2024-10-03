#include <iostream>
using namespace std;
int main() {

    int count = 0;

    int N, M;
    cin >> N >> M;

    
    int box[100] = {};

    for (int a = 0; a < N; a++) {
        box[a] = 0;
    }

    while (count < M) {

        int i, j, k;
        cin >> i >> j >> k;
        for (i=i-1; i < j ; i++) {
            box[i] = k;
        }

        count++;
    }

    for (int b = 0; b < N; b++) {
        cout << box[b] << " ";
    }

    return 0;



}