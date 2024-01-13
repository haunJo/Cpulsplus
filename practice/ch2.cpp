#include <iostream>
#include <string>
using namespace std;

void question_1();
void question_2();
void question_3();
void question_4();
void question_5();

int main(){
    //question_1();
    //question_2();
    //question_3();
    question_5();
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

void question_3(){
    int a, b;

    cin >> a >> b;

    int result =  (a>b) ? a : b;


    cout << "큰 수 = " << result << endl;

}

void question_4(){

    float arr[4];
    float max = 0;

    cout << "실수 5개 입력 :";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    for(int i = 0; i < 5; i++){
        if (arr[i] > max){
        max = arr[i];}
    }

    cout << "가장 큰 수" <<max;

}

void question_5(){
    
    cout << "문자 입력";

    string a;

    getline(cin, a);
    int cnt = 0;
    for (int i = 0; i < int(a.size()); i++){
        if (a[i] == 'x'){
            cnt++;
        }
    }
    cout << "x가 나온 횟수 : " << cnt << endl;
}