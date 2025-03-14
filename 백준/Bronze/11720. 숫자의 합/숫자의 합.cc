#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int N;
	cin >> N;
	char num[101];
	cin >> num;
	
	int sum(0);

	for (int i = 0; i < N; i++)
	{
		sum += num[i]-48;
		
	}
	cout << sum << endl;

	return 0;
}
