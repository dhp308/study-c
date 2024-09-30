#include <iostream>
using namespace std;

int main() {
    int N;
    int Max, Min;
    cin >> N;

    int* num = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    // 초기 최댓값과 최솟값 설정
    Max = num[0];
    Min = num[0];

    // 한 번의 반복문에서 최댓값과 최솟값 모두 찾기
    for (int i = 1; i < N; i++) {
        if (num[i] > Max) {
            Max = num[i];
        }
        if (num[i] < Min) {
            Min = num[i];
        }
    }

    cout << Min << " " << Max << endl;

    delete[] num;  // 동적 메모리 해제

    return 0;
}
