#include<iostream>

using namespace std;


int main() {

	int N;
	cin >> N;
	for (int k = 1; k < 2 * N ; k++) {
		if (k <= N) {
			for (int w = 0; w < N - k; w++) {
				cout << " ";
			}
			for (int y = 0; y < 2 * k - 1; y++) {
				cout << "*";
			}
		}
		else {
			for (int w = 0; w < k-N; w++) {
				cout << " ";
			}
			for (int z = 0; z < 4 * N - 2 * k - 1; z++) {
				cout << "*";
			}
		}
		cout << endl;
	}

	return 0;
}