#include <iostream>
using namespace std;
bool isEven(int x) {
    return x % 2 == 0;
}
int main() {
    int number = 8;
    if (isEven(number)) {
        cout << "Chetnoe" << endl;
    } else {
        cout << "Nechetnoe" << endl;
    }
    return 0;
}