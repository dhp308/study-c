#include<iostream>
#include<string>
using namespace std;


int main() {

	string str;
	for (int k = 0; k < 100; k++) {
		getline(cin, str);
		cout << str << endl;
	}

	return 0;
	
}