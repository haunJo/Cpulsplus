#include <iostream>
#include <cstring>
using namespace std;

void question_1();
void question_2();
void question_3();
void question_4();
void question_5();
void question_6();
void question_7();
void question_8();
void question_9();
void question_10();
void question_13();
void question_16();
int main(){
    //question_1();
    //question_2();
    //question_3();
    question_16();
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

void question_6(){
    // 문자열을 두 개 입력받고 두 개의 문자열이 같은지 검사하는 프로그램을 작성하라. 
    // 만일 같으면 “같습니다”, 아니면 “같지 않습니다”를 출력하라.

    char a[100], b[100];

    cout << "문자열을 입력";
    cin >> a;
    cout << "두 번째 문자열을 입력";
    cin >> b;

    if (strcmp(a,b) == 0){
        cout << "같습니다";
    }
    else{
        cout << "다릅니다";
    }

}

void question_7(){

    char sentence[100];

    cout << "yes를 입력하시오";

    while(1){
        cin.getline(sentence, 100, '\n');

        if(strcmp(sentence,"yes") == 0){
            break;
        }
        else{
            cout << "다시 입력하시오";
        }
    }

}

void question_8(){

    char a[30], m[30];

    strcpy(m, "a");

    for(int i=0; i<5; i++){
        cout << "입력";
        cin.getline(a,30, ';');
        cout << a << endl;
        if (strlen(a) > strlen(m)){
            strcpy(m,a);
        }
    }
    cout << m;

}

void question_9(){
    // 이름, 주소, 나이를 입력받아 다시 출력하는 프로그램을 작성하라. 실행 예시는 다음과 같다.

    string name;
    string address;
    int age;

    cout << "이름 입력";
    getline(cin, name);
    cout << "주소 입력";
    getline(cin, address);
    cout << "나이 입력";
    cin >> age;

    cout << "이름:" << name << "주소:" << address << "나이:" << age;

}

void question_10(){
    string str;

    cout <<"문자열 입력";
    getline(cin, str);

    for(int i = 0 ; i < int(str.length()); i++){
        for(int j=0; j <= i; j++){
            cout << str[j];
        }
        cout << endl;
    }
}

void question_13(){
    // 중식당의 주문 과정을 C++ 프로그램으로 작성해보자. 다음 실행 결과와 같이 메뉴와 사람 수를 입력받고 이를 출력하면 된다. 
    // 잘못된 입력을 가려내는 부분도 코드에 추가하라.
    int a,b;

    while(1){
        cout << "짬뽕 :1 짜장 :2 군만두 :3 종료 :4";
        cin >> a;
        if (a <= 0 || a > 4){
            cout << "다시 입력하시오";
            break;
        }
        else if(a == 4){
            cout << "종료";
            break;
        }
        else{
            cout << "몇인분?";
            cin >> b;
            switch(a)
            {
            case 1:
                cout << "짬뽕" << b << "인분 주문"; 
                break;
            case 2:
                cout << "짜장" << b << "인분 주문"; 
                break;
            case 3:
                cout << "군만두" << b << "인분 주문"; 
                break;
            default:
                break;
            }
            break;
        }
    }

}

void question_16(){

    char str[1000];

    int alpabet[26] = { 0 }, ind;

    cout << "영문 텍스트 입력";
    cin.getline(str, 1000, ';');
    cout << "길이 :" << strlen(str) << '\n';

    for (int i = 0 ; i < int(strlen(str)); i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            ind = (int)(str[i] - 'A');
            alpabet[ind]++;
        } 
        else if(str[i] >= 'a'){
            ind = (int)(str[i] - 'a');
            alpabet[ind]++;
        }
        else{
            continue;
        }
    }

    for (int j = 0 ; j < 26 ; j++){
        cout << "알파벳" <<  char('a'+j) << "의 개수";
         for (int k = 0 ; k < alpabet[j] ; k++){
            cout << "*";
         }
         cout << "\n";
    }


}