#include <iostream>
using namespace std;

int main() {
    int num[8] = {65, 353, 2, 7, 4, 7, 8, 1};
    cout<<"Элемент массива 3 это число: "<<num[2]<<endl;
    cout<<"Вывод всех элементов массива:"<<endl;
        for(int i = 0;i < 8;i++){
        cout<<"Элемент "<<i<<" массива num: "<<num[i]<<endl;
    }
    for(int i = 0;i < 8;i++){
    num[i]++;
    }
    for(int i = 0;i < 8;i++){
    cout<<"Элемент "<<i<<" массива num, но на единицу больше: "<<num[i]<<endl;
    }
    
    int z = 0;
    for(int i = 0;i < 8;i++){
        z = z + num[i];
    }
    cout<<"Сумма элементов массива:"<<z<<endl;
    
    int temp = num[0];
    for(int i = 0; i < 8;i++){
        if(num[i] > temp){
            temp = num[i];
        }
    }
    cout<<"Наибольший элемент: "<<temp<<endl;
    
    int count = 0;
    for(int i = 0;i < 8;i++){
        if(num[i] % 2 == 0){
            count++;
        }
    }
    cout<<"Количество четных чисел: "<<count<<endl;
    return 0;
}
