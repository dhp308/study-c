#include<iostream>
#include<cstring>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	char A[4], B[4];
	for (int k = 0; k < 3; k++) {
		A[k] = a % 10 + 48;
		B[k] = b % 10 + 48;
		a = a / 10;
		b = b / 10;
	}
	A[3] = '\0', B[3] = '\0';
	

	for (int y = 0; y < 3; y++) {
		if (A[y] == B[y]) {
			continue;
		}
		else if (A[y] > B[y]) {
			cout << A;
			break;
		}
		else {
			cout << B;
			break;
		}
	}

	return 0;
}