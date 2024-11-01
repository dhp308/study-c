#include<iostream>
using namespace std;
void swapvalue(int*a,int num1,int num2);
int main()
{
	int nSize, ntime;
	int basket[100] = {};
	cin >> nSize >> ntime;
	for (int i = 0; i < nSize; i++) {
		basket[i] = i + 1;
	}
	for (int i = 0; i < ntime; i++) {
		int a, b;
		cin >> a >> b;
		int kSize = (b - a + 1)/2 ;
		for (int k = 0; k < kSize; k++) {
			swapvalue(basket,a-1,b-1);
			a++, b--;
		}
	}
	for (int i = 0; i < nSize; i++) {
		cout << basket[i] << " ";
	}

	return 0;
}

void swapvalue(int* a, int num1, int num2) {
	int temp;
	temp = a[num1];
	a[num1] = a[num2];
	a[num2] = temp;
}