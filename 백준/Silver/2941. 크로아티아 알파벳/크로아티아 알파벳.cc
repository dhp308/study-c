#include<iostream> 
#include<cstring> 
#include<string> 
using namespace std; 
const int MAX = 101;

int main() { 
	
	char str[MAX];
	cin.getline(str, MAX);
	int index = 0, cnt = 0;
	while (str[index] != '\0') {
		if (str[index] == 'c' ){
			if (str[index + 1] == '=' || str[index + 1] == '-') {
				index++;
				cnt++;
			}
			else {
				cnt++;
			}
	
		}
		else if (str[index] == 'd') {
			
			if (str[index+1] == 'z' && str[index+2]=='=') {
				index+=2;
				cnt++;
			}
			else if (str[index + 1] == '-') {
				index++;
				cnt++;
			}
			else {
				cnt++;
			}
		}
		else if (str[index] == 'l') {
			if (str[index + 1] == 'j' ) {
				index++;
				cnt++;
			}
			else {
				cnt++;
			}

		}
		else if (str[index] == 'n') {
			if (str[index + 1] == 'j' ) {
				index++;
				cnt++;
			}
			else {
				cnt++;
			}

		}
		else if (str[index] == 's') {
			if (str[index + 1] == '=' ) {
				index++;
				cnt++;
			}
			else {
				cnt++;
			}

		}
		else if (str[index] == 'z') {
			if (str[index + 1] == '=' ) {
				index++;
				cnt++;
			}
			else {
				cnt++;
			}

		}
		else {
			cnt++;
		}
		index++;
	}
	cout << cnt;

	return 0;
	

}
