#include <iostream>
using namespace std;

int main() {
    for(int i = 1;i < 20;i += 1){
        if(i % 2 == 0){
            cout<<i<<"-Это число четное"<<endl;
        }
        else if(i == 13){
            cout<<i<<"-Это число моего Дня рождения"<<endl;
        }
        else{
            cout<<i<<"-Это число нечетное"<<endl;
        }
}
}