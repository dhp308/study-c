#include<iostream> 

using namespace std; 



int main() { 
	int N, M;
	cin >> N >> M;
	int A[100][100], B[100][100];

	
	for (int k = 0; k < N; k++) {
		for (int y = 0; y < M; y++) {
			cin >> A[k][y];
		}
	}

	for (int k = 0; k < N; k++) {
		for (int y = 0; y < M; y++) {
			cin >> B[k][y];
		}
	}

	for (int k = 0; k < N; k++) {
		for (int y = 0; y < M; y++) {
			A[k][y] = A[k][y] + B[k][y];
		}
	}

	for (int k = 0; k < N; k++) {
		for (int y = 0; y < M; y++) {
			cout << A[k][y] << " ";
		}
		cout << endl;
	}



	return 0;

}