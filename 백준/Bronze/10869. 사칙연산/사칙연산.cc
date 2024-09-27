#include <iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,mul,q,p;
    cin >> a >> b;
    sum = a+b;
    sub = a-b;
    mul = a*b;
    q = a/b;
    p = a%b;
    
    cout << sum << endl;
    cout << sub << endl;
    cout << mul << endl;
    cout << q << endl;
    cout << p << endl;
    
    return 0;
}