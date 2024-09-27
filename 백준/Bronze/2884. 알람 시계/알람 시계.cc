#include<iostream>
using namespace std;

int main()
{
	int H, M;
	int subM;

	cin >> H >> M;

	subM = M - 45;

	if (subM < 0 && H > 0 ) {
		subM = subM + 60;
		H--;
	}
	else if (subM < 0 && H == 0) {
		subM = subM + 60;
		H = 23;
	}
    else {
	subM = subM;
    }

	cout << H << " " << subM << endl;

	return 0;
	

		
}