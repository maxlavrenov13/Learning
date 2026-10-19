#include <iostream>
using namespace std;

int minOfThree(int a, int b, int c){
    int minAB = (a < b) ? a : b;
    return (minAB < c) ? minAB : c;
}
int main (){
    int a;
    int b;
    int c;
    cout<<"Put numbers here: ";
    cin>>a>>b>>c;
    int minimum = minOfThree(a, b ,c);
    cout<<"Minimum is "<< minimum << endl;
    return 0;
}