#include <iostream>

using namespace std;

void question_1();
void question_2();

int main(){
    //question_1();
    question_2();
}

void question_1(){
    for(int i = 1; i <= 100; i++){
        cout << i << "\t";
        if(i%10 == 0){
        cout << "\n";
        }
    }
}

void question_2(){
    for (int i = 1; i <= 9;i++){
        for (int j=1; j <= 9;j++){
            cout << i << "X" << j << '=' << i*j << '\t';
        }
        cout << '\n';
    }
    
}