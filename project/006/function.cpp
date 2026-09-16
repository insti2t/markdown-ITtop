#include <iostream>
#include "math.h"

using namespace std;

double fun(double x){
    return (exp(2*x)+pow(2,x))/pow(x, 2)*log(x);
}

double fun2(double a, double b){
    return ((a/(1+pow(b,2)))+(b/(1+pow(a,2))))-pow((a-b), 3);
}

double fun3(double j){
    return log(pow(pow(j, 2) / sqrt(j), 3)) / log(j);
}

int main() {

    cout << "y = (2^x+e^(2*x)) / x^2 *ln(x)" << endl;
    cout << "Type X" << endl;
    int g;
    cin >> g;
    cout << "Answer" << endl;
    cout << fun(g) << endl;
    cout << "h(a,b)=a/(1+b^2)+b/(1+a^2)-(a-b)^3" << endl;
    cout << "Type A" << endl;
    int c;
    cin >> c;
    cout << "Type B" << endl;
    int b;
    cin >> b;
    cout << "Answer" << endl;
    cout << fun2(c, b) << endl;
    cout << "logx(x^2/_/x)^3" << endl;
    cout << "type x" << endl;
    int l;
    cin >> l;
    cout << "Answer" << endl;
    cout << fun3(l) << endl;

    return 0;
}

