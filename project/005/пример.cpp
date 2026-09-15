#include <iostream>
#include <string>

using namespace std;
typedef unsigned long long ull_num; // псевдоним

// гл функция
int main() {
    
    cout << "a + (m - b)" << endl;

    int a;
    cout << "Type A" << endl;
    cin >> a;
    int b;
    cout << "Type B" << endl;
    cin >> b;
    int m;
    cout << "Type M" << endl;
    cin >> m;
    int c = m - b;

    cout << "a=" << a << ", b=" << b << ", m=" << m << endl;

    cout << "Answer: " << a + c << endl;

    return 0;
}