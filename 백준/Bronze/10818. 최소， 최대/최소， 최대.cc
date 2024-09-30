#include <iostream>
using namespace std;
int main() {
    int N;
    int Max, Min;
    cin >> N ;
    int* num = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    
    Max =num[0];
    Min = num[0];

    for (int k = 0; k < N; k++) {
        if (num[k] > Max) {
            Max = num[k];
        }
    }

    for (int j = 0; j < N; j++) {
        if (num[j] < Min) {
            Min = num[j];
        }
    }

    cout << Min << " " << Max << endl;
    
    delete[] num;

    return 0;

}