#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int fst,snd,trd,fth;
    cin >> a >> b >> c;
    fst = (a+b)%c;
    snd = ((a%c)+(b%c))%c;
    trd = (a*b)%c;
    fth = ((a%c)*(b%c))%c;
    cout << fst << endl;
    cout << snd << endl;
    cout << trd << endl;
    cout << fth << endl;
    
    return 0;
}
