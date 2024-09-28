#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j, k;

	for ( i = 1; i < n+1; i++) {


		for (k = 0; k < n - i; k++) {
			cout << " ";
		}


		for (j = 0; j < i; j++) {
				cout << "*";
		}

		j = 0;
		k = 0;
		cout << "\n";
		
			
		
	}

	return 0;
}