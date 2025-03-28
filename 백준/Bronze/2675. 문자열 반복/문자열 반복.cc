#include<iostream>
using namespace std;

int main()
{
	int r,k;
	cin >> r;
	
	for (int i = 0; i < r; i++) {
		cin >> k;
		char line[1000];
		cin >> line;
		int x(0);
		while (line[x] != '\0') {
			for (int i = 0; i < k; i++) {
				cout << line[x];
			}
			x++;
		}
		cout << endl;

		

	}

	
	return 0;
}