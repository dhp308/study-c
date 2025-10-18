#include<iostream> 
#include<cstring> 
#include<string> 
using namespace std; 
const int MAX = 101;
int  check(char str[MAX]);

int main() { 
	
	int N, cnt = 0;
	cin >> N;
	cin.ignore();
	
	for (int i = 0; i < N; i++) {
		char str[MAX];
		cin.getline(str, MAX);
		cnt += check(str);
	}

	cout << cnt;

	return 0;

}

int  check(char str[MAX]) {
	
	int i = 0;
	while (str[i] != '\0') {
		while (str[i + 1] == str[i] && str[i+1]!='\0') {
			i++;
		}
		for (int k = i + 1; str[k] != '\0'; k++) {
			if (str[i] == str[k]) {
				return 0;
			}
		}
		i++;
	}

	return 1;
}
