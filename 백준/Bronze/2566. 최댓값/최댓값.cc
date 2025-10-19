#include<iostream> 
using namespace std; 



int main() { 
	int num[9][9];
	int R, C, MAX = -1;

	for (int i = 0; i < 9; i++) {
		for (int k = 0; k < 9; k++) {
			cin >> num[i][k];
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int k = 0; k < 9; k++) {
			if (num[i][k] > MAX) {
				MAX = num[i][k];
				R = i + 1, C = k + 1;
			}
		}
	}

	cout << MAX << endl << R << " " << C;

	return 0;


}