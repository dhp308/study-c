#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i=1; i < n+1; i++) {
		int a, b;
		cin >> a >> b;
		cout << "Case #" << i << ": " << a+b << "\n";
	}

	return 0;
}