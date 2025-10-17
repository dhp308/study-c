#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 101;
int check(char str[MAX],int length);

int main() {
	char str[MAX];
	int length=0, k=0 ;
	cin.getline(str, MAX);
	while (str[k] != '\0') {
		length++;
		k++;
	}

	int num = check(str, length);

	cout << num;
	
}

int check(char str[MAX], int length) {
	if (length % 2 == 0) {
		for (int i = 0; i < length / 2; i++) {
			if (str[i] == str[length - 1 - i]) {
				continue;
			}
			else {
				return 0;
			}
		}
		return 1;
	}
	else {
		for (int i = 0; i < length / 2 + 1; i++) {
			if (str[i] == str[length - 1 - i]) {
				continue;
			}
			else {
				return 0;
			}
			
		}
		return 1;
	}
}