#include<iostream>
using namespace std;

int checkyear(int year);
int main()
{
	int year,resp;
	cin >> year;
	resp = checkyear(year);
	cout << resp;

	return 0;

}
int checkyear(int year)
{
	int y = year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return 1;
	}

	return 0;
}