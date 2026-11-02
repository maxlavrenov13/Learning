#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int x = 2;
    float y = 3.56;
    string a = "I live in ";
    string b = "Moscow";
    a.append(b);
    cout << a << endl;
    cout << round(y) << endl;
    cout << pow(x, 16);
}