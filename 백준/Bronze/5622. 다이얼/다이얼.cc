#include<iostream>
#include<cstring>
using namespace std;


int main() {

	char num[16];
	int time = 0, n = 0;
	cin.getline(num, 16);

	while (num[n] != '\0') {
		if (num[n] == 'A' || num[n] == 'B' || num[n] == 'C') {
			time += 3;
		}
		else if (num[n] == 'D' || num[n] == 'E' || num[n] == 'F') {
			time += 4;
		}
		else if (num[n] == 'G' || num[n] == 'H' || num[n] == 'I') {
			time += 5;
		}
		else if (num[n] == 'J' || num[n] == 'K' || num[n] == 'L') {
			time += 6;
		}
		else if (num[n] == 'M' || num[n] == 'N' || num[n] == 'O') {
			time += 7;
		}
		else if (num[n] == 'P' || num[n] == 'Q' || num[n] == 'R' || num[n] == 'S') {
			time += 8;
		}
		else if (num[n] == 'T' || num[n] == 'U' || num[n] == 'V') {
			time += 9;
		}
		else if (num[n] == 'W' || num[n] == 'X' || num[n] == 'Y'|| num[n]=='Z') {
			time += 10;
		}
		n++;
	}

	cout << time;

	return 0;
	
}