#include <iostream>
#include "math.h"

using namespace std;

double logab(double a, double b) {
    return log(a) / log(b);
}

int main() {
    int x = 4;
    double abs_v = abs(-4);
    double sqrt_v = sqrt(9);
    double exp_v = exp(1);
    double pow_v = pow(2, x);
    double log_v = log(exp_v);
    double log2_v = log2(8);
    double log10_v = log10(100);
    double logab_v = logab(16, 2);
    double PI_v = acos(-1);
    
    cout
        << abs_v << endl
        << sqrt_v << endl
        << exp_v << endl
        << pow_v << endl
        << log_v << endl
        << log2_v << endl
        << log10_v << endl
        << logab_v << endl
        << PI_v << endl
        << round(sin(PI_v)) << endl
        << "floor: " << floor(0.4) << endl
        << "ceil: " << ceil(0.4) << endl        
        << endl;



        return 0;
}
