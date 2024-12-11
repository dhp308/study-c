#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore(30, '\n');

	char S[9][1001];
	for (int i = 0; i < T; i++) {
		cin.getline(S[i], 1001);

	}
	for (int i = 0; i < T; i++) {
		int a;
		a = strlen(S[i]);
		
		
			cout << S[i][0] << S[i][a - 1]<<endl;
		
	}
	
	return 0;
}