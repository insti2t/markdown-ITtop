#include <iostream>
#include "math.h"

using namespace std;

double fun2(double a, double b){
    return ((pow(3*a, 2)+pow(b, 2)-1)/(abs(a+b)+100));
}

int main() {

    cout << "f(a,b)=(3*a^2+b^2-1)/(|a+b|+100)" << endl;
    cout << "Type A" << endl;
    int c;
    cin >> c;
    cout << "Type B" << endl;
    int b;
    cin >> b;
    cout << "Answer" << endl;
    cout << fun2(c, b) << endl;


    return 0;
}
