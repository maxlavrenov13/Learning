#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
class speedSensor{//Отдает скорость
private:
    int speed;
public:
    speedSensor(){
    speed =  0; 
    }
    int next() {
        speed = speed + 5 + (rand() % 5 - 2);
        return speed;
    }
};
class telemetryLogger{ //Записывает скорость и тайминги
private:
public:
    void log(int speed){
        ofstream file("logger.txt", ios_base::app);
            if(file.is_open()){
                file << speed << endl;
                file.close();
            }
    }
};
class crashReport{ //В момент аварии функция записывает данные -> на основе заданных параметров делает вывод в текстовый файл
private:
public:
};
int main(){ //Запись функций в main
    srand(time(0));
    speedSensor s;
    telemetryLogger l;
    for(int i = 0; i < 20; i++){
        int v = s.next();
        l.log(v);
    }
}