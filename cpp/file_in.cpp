#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("test.txt", ios_base::out);
    if(file.is_open()){
        file << "Hello Moscow";
        file.close();
    }
    return 0;
}