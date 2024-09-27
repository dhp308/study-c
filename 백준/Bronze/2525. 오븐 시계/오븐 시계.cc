#include<iostream>
using namespace std;

int main()
{
	int H, M, spendingtime;
	int sH, sM;
	cin >> H >> M;
	cin >> spendingtime;
	sH = spendingtime / 60;
	sM = spendingtime % 60;
	H = H + sH;
	M = M + sM;
	//      0<= M <120
	if (H <= 23 && M < 60) {
		cout << H << " " << M << endl;

	}
	else if (H > 23 && M < 60) {
		H = H - 24;
		cout << H << " " << M << endl;
	}
	else if (H < 23 && M >= 60) {
		H++;
		M = M - 60;
		cout << H << " " << M << endl;
	}
	else {
		H = H - 23;
		M = M - 60;
		cout << H << " " << M << endl;
	}
	

	return 0;
}