#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;

	for ( i = 1; i < n+1; i++) {
		for ( j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
		j = 0;
	}

	return 0;
}