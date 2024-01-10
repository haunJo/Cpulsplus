#include <iostream>



int main(){

double myDouble = 3.14;
int i1 = (int)myDouble;
//int i2 = int(myFloat);
int i3 = static_cast<int>(myDouble);

// i3 방식이 가장 적합

int a = 3;

/*if(a>2){
    continue
}
else if(a == 2){
    continue
}
else{
    continue
}*/

// 범위기반 for문

int arr[5] = {1,2,3,4,5};
for (int value : arr){
    std::cout << value << " ";
}

return 0;
}