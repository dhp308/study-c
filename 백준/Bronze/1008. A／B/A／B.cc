#include<iostream>
using namespace std;

int main()
{
    
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(9);
        
    double a,b,div;
    
    cin >> a >> b;
    div = a/b;
    cout << div ;
    
    return 0;
    
   
}