#include<iostream>
using namespace std;
int main()
{
	int a, b;
	
	
	while (1) {
		cin >> a >> b;

		if (a == -1) {
			break;
		}
		else {
			cout << a + b << endl;
		}





		a = -1, b = -1;

	}

	return 0;
}