#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double A,B;
    cin >> A >> B;

    double num = A / B;

    double result = floor(num);
    double result1 = ceil(num);
    double result2 = round(num);

    cout << "floor" << " " << A << " " << "/ " << B << " " << "= "<< result << endl;
    cout << "ceil" << " " << A << " " << "/ " << B << " " << "= " << result1 << endl;
    cout << "round" << " " << A << " " << "/ " << B << " " << "= " << result2 << endl;
}
