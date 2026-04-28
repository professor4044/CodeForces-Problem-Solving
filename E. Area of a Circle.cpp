#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    float  x = 3.141592653;
    float R;
    cin>> R;
    float Area = x*R*R;
    cout << Area <<endl;

}
