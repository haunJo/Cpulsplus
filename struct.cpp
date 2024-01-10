#include <iostream>
#include <string>
using namespace std;


int main(){

struct Car{
    string name;
    int speed;
    int fuel_efficiency;
    int price;
};

Car c1;
Car c2;
Car c3;

c1.name = "My car";
c1.speed = 25;
c1.fuel_efficiency = 60;
c1.price = 30000000;

Car c4 = {"my car1", 25, 60, 23000000};


struct Square{
    int x;
    int y;
};

Square sq[3];

sq[0].x = 10;
sq[1].y = 10;

}

Square area(Square sq){
    return sq.x = 10 *  sq.y = 20;

}
