#include<iostream> 
#include<cstring> 
#include<string> 
using namespace std; 
const int MAX = 1000001; 

struct al { 
	string alpha; 
	int freq = 0; }; 
int main() { 
	int x = 65; 
	al alphavet[26]; 
	for (int k = 0; k < 26; k++) { 
		alphavet[k].alpha = x; 
		x++; } 
	char str[MAX]; 
	cin.getline(str, MAX); 
	int index = 0; 
	while (str[index] != '\0') {
		if (str[index] == 'a' || str[index] == 'A') {
			alphavet[0].freq += 1;
		}
		else if (str[index] == 'b' || str[index] == 'B') {
			alphavet[1].freq += 1;
		}
		else if (str[index] == 'c' || str[index] == 'C') {
			alphavet[2].freq += 1;
		}
		else if (str[index] == 'd' || str[index] == 'D') {
			alphavet[3].freq += 1;
		}
		else if (str[index] == 'e' || str[index] == 'E') {
			alphavet[4].freq += 1;
		}
		else if (str[index] == 'f' || str[index] == 'F') {
			alphavet[5].freq += 1;
		}
		else if (str[index] == 'g' || str[index] == 'G') {
			alphavet[6].freq += 1;
		}
		else if (str[index] == 'h' || str[index] == 'H') {
			alphavet[7].freq += 1;
		}
		else if (str[index] == 'i' || str[index] == 'I') {
			alphavet[8].freq += 1;
		}
		else if (str[index] == 'j' || str[index] == 'J') {
			alphavet[9].freq += 1;
		}
		else if (str[index] == 'k' || str[index] == 'K') {
			alphavet[10].freq += 1;
		}
		else if (str[index] == 'l' || str[index] == 'L') {
			alphavet[11].freq += 1;
		}
		else if (str[index] == 'm' || str[index] == 'M') {
			alphavet[12].freq += 1;
		}
		else if (str[index] == 'n' || str[index] == 'N') {
			alphavet[13].freq += 1;
		}
		else if (str[index] == 'o' || str[index] == 'O') {
			alphavet[14].freq += 1;
		}
		else if (str[index] == 'p' || str[index] == 'P') {
			alphavet[15].freq += 1;
		}
		else if (str[index] == 'q' || str[index] == 'Q') {
			alphavet[16].freq += 1;
		}
		else if (str[index] == 'r' || str[index] == 'R') {
			alphavet[17].freq += 1;
		}
		else if (str[index] == 's' || str[index] == 'S') {
			alphavet[18].freq += 1;
		}
		else if (str[index] == 't' || str[index] == 'T') {
			alphavet[19].freq += 1;
		}
		else if (str[index] == 'u' || str[index] == 'U') {
			alphavet[20].freq += 1;
		}
		else if (str[index] == 'v' || str[index] == 'V') {
			alphavet[21].freq += 1;
		}
		else if (str[index] == 'w' || str[index] == 'W') {
			alphavet[22].freq += 1;
		}
		else if (str[index] == 'x' || str[index] == 'X') {
			alphavet[23].freq += 1;
		}
		else if (str[index] == 'y' || str[index] == 'Y') {
			alphavet[24].freq += 1;
		}
		else if (str[index] == 'z' || str[index] == 'Z') {
			alphavet[25].freq += 1;
		}
		index++;
	}
	int maxpos = 0;
	int max = alphavet[0].freq;
	for (int i = 1; i < 26; i++) {
		if (alphavet[i].freq > max) {
			max = alphavet[i].freq;
			maxpos = i;
		}
	}

	for (int z = 0; z < 26; z++) {
		if (z != maxpos && alphavet[z].freq == max) {
			cout << "?";
			return 0;
		}
	}

	cout << alphavet[maxpos].alpha;



	return 0;
	

}
