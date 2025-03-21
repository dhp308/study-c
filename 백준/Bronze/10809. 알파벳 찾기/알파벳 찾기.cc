#include<iostream>
using namespace std;

int main()
{
	
	char word[101];
	cin >> word;
	char x = 'a';
	int j = 0;
	int k = 0;
	for ( k = 0; k < 101; k++) {
		if (word[k] == '\0')
			break;
	}
	
	int Size = k ;
	for (int i = 0; i < 26; i++) {
		for ( j = 0; j < Size ; j++) {
			if (word[j] == x) {
				cout << j << " ";
				break;
			}

			
		}

		if (j == Size) {
			cout << -1 << " ";
		}
		
		x += 1;
	}

	return 0;
}