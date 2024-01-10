#include <iostream>



class Human{
    public:
        void walk();
        void speak();
        int get_blood();
        void set_blood(int blood_v);
    private:
        int blood;
        int bones;

};

void Human::set_blood(int blood_v){
    blood = blood_v;
}
int Human::get_blood(){
    return blood;}
    
int main(){
    return 1;
}