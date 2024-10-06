#include <iostream>
using namespace std;
const int MAX_SIZE = 100;


int main() {

	int N, M;
	cin >> N >> M;
	
	int basket[MAX_SIZE] = {};

	for (int i = 0; i < N; i++) {
		basket[i] = i + 1;
	}

	int count = 0;

	while (count < M) {
		int a, b,temp;
		cin >> a >> b;
		temp = basket[a - 1];
		basket[a - 1] = basket[b-1];
		basket[b - 1] = temp;
		count++;

	}

	for (int i = 0; i < N; i++) {
		cout << basket[i] << " ";
	}

	return 0;
   
}