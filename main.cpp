#include <iostream>
//Dannaya progg uchebnaya
//SadovnikovMurzin KE-317 2022
using namespace std;

int main()
{
    int x, y, s, r, p, d;

    cout << "Enter X: "; cin >> x;
    cout << "Enter Y: "; cin >> y;

    s=x+y;
    cout << "Sum="; cout << s;

    r=x-y;
    cout << "Raznost'="; cout << r;

    p=x*y;
    cout << "Proizvedenie="; cout << p;

    d=x/y;
    cout << "Chastnoe'="; cout << d;

    return 0;
}
