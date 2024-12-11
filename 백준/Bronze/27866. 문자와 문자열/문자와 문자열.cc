#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char S[1001];
	int n;
	cin.getline(S, 1001);
	cin >> n;

	cout << S[n - 1];

	return 0;
}