#include<iostream>
using namespace std;
int main()
{
	int N;
	int count = 0;
	cin >> N;

	int num[10000] = {};
	
    for (int k =0;k<N;k++){
        cin >> num[k];
    }

	int a;
	cin >> a;

	for (int i = 0; i < N; i++) {
		if (num[i] == a) {
			count++;
		}
	}

	cout << count << endl;

	return 0;

}