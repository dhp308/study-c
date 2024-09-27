#include<iostream>
using namespace std;
int findMAX(int a, int b, int c);
int main()
{
	int a, b, c, gold;
	cin >> a >> b >> c;

	if (a == b && b == c) {
		gold = 10000 + a * 1000;
		cout << gold << endl;
	}
	else if (a == b && b != c) {
		gold = 1000 + 100 * a;
		cout << gold << endl;
	}
	else if (a == c && a != b) {
		gold = 1000 + 100 * a;
		cout << gold << endl;
	}
	else if (c == b && a != c) {
		gold = 1000 + 100 * b;
		cout << gold << endl;
	}
	else {
		gold = findMAX(a,b,c) * 100;
		cout << gold << endl;
	}

	return 0;
}
	
int findMAX(int a, int b, int c) {
	int max = a;
	if (max<b && b>c) {
		max = b;
        return max;
	}
    else if(max<c && c>b){
        max = c;
        return max;
    }
    else{
        return max;
    }
        
    
	
}