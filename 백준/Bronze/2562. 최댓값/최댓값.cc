#include <iostream>
using namespace std;
int main() {
    int num[9] = {};
    int Max, loc;
    loc = -1; Max = -1;

    

    for (int i = 0; i < 9; i++) {
        cin >> num[i];

      
    }

    

    for (int k = 0; k < 9; k++) {
        if (num[k] > Max) {
            Max = num[k];
            loc = k+1;
        }
    }

    cout << Max << endl;
    cout << loc << endl;

    return 0;



}
