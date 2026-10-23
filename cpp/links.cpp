#include <iostream>
using namespace std;

int main() {
    short j = 8;
    short &h = j;
    cout << &j << endl << &h << endl;
    return 0;
}