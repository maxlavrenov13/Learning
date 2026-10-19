#include <iostream>
using namespace std;

int maxOfTwo(int a, int b) {
    return(a > b)? a : b;
}
int main () {
    int a;
    int b;
    cout<<"Put first number:";
    cin>>a;
    cout<<"Put second number:";
    cin>>b;
    int winner = maxOfTwo(a, b);
    cout<<"Number "<< winner <<" is bigger"<<endl;
    return 0;
}