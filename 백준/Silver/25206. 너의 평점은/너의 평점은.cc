#include<iostream> 
#include<cstring> 
#include<string> 
using namespace std; 



int main() { 
	
	double sumofscore = 0.0, sumofclass = 0.0;

	for (int i = 0; i < 20; i++) {
		string str;
		double subject;
		string score;
		
		
		cin >> str >> subject >> score;
	
		
		
		if (score == "P") {
			continue;
		}
		else if (score == "A+") {
			sumofclass += subject;
			sumofscore += 4.5 * subject;
		}
		else if (score == "A0") {
			sumofclass += subject;
			sumofscore += 4.0 * subject;
		}
		else if (score == "B+") {
			sumofclass += subject;
			sumofscore += 3.5 * subject;
		}
		else if (score == "B0") {
			sumofclass += subject;
			sumofscore += 3.0 * subject;
		}
		else if (score == "C+") {
			sumofclass += subject;
			sumofscore += 2.5 * subject;
		}
		else if (score == "C0") {
			sumofclass += subject;
			sumofscore += 2.0 * subject;
		}
		else if (score == "D+") {
			sumofclass += subject;
			sumofscore += 1.5 * subject;
		}
		else if (score == "D0") {
			sumofclass += subject;
			sumofscore += 1.0 * subject;
		}
		else if (score == "F") {
			sumofclass += subject;
			sumofscore += 0.0 * subject;
		}
	}
	
	cout << sumofscore / sumofclass;

	return 0;
}
