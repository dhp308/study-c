#include <iostream>
using namespace std;

int IndexOfMaxscore(double* score, int size);
void MakeNewScore(double* score, int size, int indexofmax);
double CalculateMean(double* score, int size);

int main() {
    int nSize;
    cin >> nSize;

    double score[1000] = {};
    for (int i = 0; i < nSize; i++) {
        cin >> score[i];
    }

    int indexofmax = IndexOfMaxscore(score, nSize);
    MakeNewScore(score, nSize, indexofmax);

    double mean = CalculateMean(score, nSize);

    cout << fixed;
    cout.precision(6);  // 소수점 6자리까지 출력
    cout << mean << endl;

    return 0;
}

int IndexOfMaxscore(double* score, int size) {
    double max = score[0];
    int indexofmax = 0;
    for (int i = 1; i < size; i++) {
        if (score[i] > max) {
            indexofmax = i;
            max = score[i];
        }
    }
    return indexofmax;
}

void MakeNewScore(double* score, int size, int indexofmax) {
    double maxScore = score[indexofmax];
    for (int i = 0; i < size; i++) {
        score[i] = (score[i] / maxScore) * 100.0;
    }
}

double CalculateMean(double* score, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += score[i];
    }
    return sum / size;
}
