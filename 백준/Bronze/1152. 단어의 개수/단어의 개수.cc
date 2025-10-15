#include<iostream>
#include<cstring>
using namespace std;
const int MAX_STR = 1000001;

int main() {
	char a[MAX_STR];
	int cnt = 0;
	cin.getline(a, MAX_STR);
	for (int k = 0; k < MAX_STR; k++) {
		if (a[k] == ' ' && k!=0) {
			cnt++;
		}
		if (a[k] == '\0') {
			if (a[k - 1] == ' ') {
				cnt--;
			}
			break;
		}
			
	}
	cnt++;

	
	

	cout << cnt;

	return 0;


	
}