#include <iostream>
#include <cmath>
#include <complex>

using namespace std;


int main(){
    complex<double> z1 = 1i*1i;
    cout << "i * i = "<< z1;

    complex<double> z2 = 1+2i;
    complex<double> z3 = 1-2i;
    complex<double> z4 = z2*z3;
    cout << "\nz2*z3 = " << z4;

    return 0;
}