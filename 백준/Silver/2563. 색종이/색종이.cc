#include<iostream> 
using namespace std; 



int main() { 
	int N, sum=0;
	cin >> N;
	
	int white[100][100];

	for (int k = 0; k < 100; k++) {
		for (int y = 0; y < 100; y++) {
			white[k][y] = 0;
		}
	}

	for (int i = 0; i < N; i++) {
		int a,b;
		cin >> b >> a;
		int A = 99 - a;

		
		for (int w = A; w > A - 10; w--) {
			for (int r = b; r < b + 10; r++) {
				white[w][r] +=1;
			}
		}


	}

	

	for (int k = 0; k < 100; k++) {
		for (int y = 0; y < 100; y++) {
			if (white[k][y] !=0) {
				sum++;
			}
		}
	}

	cout << sum;

	return 0;
	
	

}
