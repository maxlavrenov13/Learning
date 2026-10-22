#include<iostream>
using namespace std;

void mathh(int i){
    short f = i * i;
    short l = f + 9;
    cout<<l<<endl;
}
void mathh(string word){
    cout<<word<<endl;
   }
int main() {
    mathh(9);
    mathh("Some words are");
}