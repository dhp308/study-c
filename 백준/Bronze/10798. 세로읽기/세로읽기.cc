#include<iostream> 
#include<cstring>
using namespace std; 



int main() { 
	char str[5][16];
	int map[5] = { 1,1,1,1,1 };
	cin.getline(str[0], 16);
	for (int i = 1; i <5; i++) {
		
		cin.getline(str[i], 16);
	}

	

	for (int x = 0; x < 16; x++) {
		for (int y = 0; y < 5; y++) {
			if (str[y][x] == '\0') {
				map[y] = 0;
			}

			if (map[y] && str[y][x] >= 0 && str[y][x] <= 9) {
				cout << str[y][x] + 48;
			}
			else if (map[y]) {
				cout << str[y][x];
			}

		}
	}


}
