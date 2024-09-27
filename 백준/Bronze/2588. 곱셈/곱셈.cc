#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int fst,snd,trd;
    cin >> a >> b;
    fst = b%10;
    snd = (b/10)%10;
    trd = b/100;
    cout << a*fst << endl;
    cout << a*snd << endl;
    cout << a*trd << endl;
    cout << a*fst + a*snd*10 + a*trd*100 << endl;
    
    return 0;
    
}
