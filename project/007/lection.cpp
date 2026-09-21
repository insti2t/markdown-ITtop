#include <iostream>
#include <bitset>
using namespace std;

//ничего не возвращает
void new_fn(int x, int y) {
    cout << "x: "<< bitset<8>(x) << endl
    << "y: " << bitset<8>(y) << endl;
    int z1 = x & y; // побитовое И
    cout << "x & y: " << bitset<8>(z1) << ';' << endl;
    int z2 = x | y; // побитовое ИЛИ
    cout << "x | y: " << bitset<8>(z2) << ';' << endl;
    int z3 = x ^ y; // побитовое исключающее ИЛИ
    cout << "x ^ y: " << bitset<8>(z3) << ';' << endl;
    int z4 = ~x; // побитовое отрицание
    cout << "~x: " << bitset<8>(z4) << ';' << endl;
    int z5 = x >> y; // побитовое сдвиг вправо
    cout << "x >> y: " << bitset<8>(z5) << ';' << endl;
    int z6 = x << y; // побитовое сдвиг влево
    cout << "x << y: " << bitset<8>(z6) << ';' << endl;

}

int if_fn(bool x){
    if (x){ //ветвление
        return 100;
    } else {
        return 250;
    }
}

int tern_op(bool x) {
    // тернарный оператор
    return x == true ? 100 : 250;
}

int main() {
    int state;
    cin >> state;
    switch (state) //оператор множественного выбора
    {
    case 0:
        int x = 0b010;
        int y = 0b011;
        new_fn(x, y);
        break;
    
    case 1:
        cout << "result: " << if_fn(true) << ';' << endl;
        break;
    }
}