#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false); // C++ 표준 입출력과 C 표준 입출력의 동기화 비활성화
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i=0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}