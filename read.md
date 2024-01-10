## Cpulsplus

## 자료형과 변수

### 자료형

자료형은 크게 두 가지로 구분

1. 프로그래밍 언어가 제공하는 자료형
2. 개발자가 필요에 의해 만드는 사용자 정의 자료형

사용자 정의 자료형 예시 : ```class```, ```struct```, ```union```


### 변수(variables)란?

정의한 자료형의 값을 저장할 수 있는 '메모리 공간'

> 객체 지향 방법론에서는 변수도 개념적으로는 객체에 포함되는 관계. 곧 모든 자료형으로 정의한 것은 객체라고 할 수 있음

기능적 의미로 상수(const), 정적(static), 동적(dynamic) 객체 등 속성에 따라 이름을 달리 사용하나 값을 저장하는 것은 변수이고 객체임.

C++에서는 일반적으로 기본 자료형으로 정의한 것은 변수, 사용자 정의 자료형으로 정의한 것은 객체라고 함.

- bool : 1byte
- char : 1byte
- wchar_t (wide character) : 4byte
- int : 4byte
- double : 8byte
- void

정수를 다루는 자료형은 2의 보수로 음수값을 표현함. 정수 자료형의 최상위 bit가 부호(sign)이지만, unsigned를 함께 사용하면 자연수만 표현함

### const(constant)

const는 언제든 변할 수 있는 객체를 불변으로 정의하는 예약어임.



```c++
int const * p1 = new int;  // 또는 const int * p1 = new int;
*p1 = 10; // error
delete p1;
p1 = new int; // ok

```
```c++
int * const p2 = new int;
*p2 = 10; // ok
delete p2;
p2 = new int; // error
```

### static, extern

c++에서 `static` 은 사용자 정의 자료형의 멤버함수와 멤버변수에 사용하는 것과 컴파일 과정 중 링킹 과정에 내부, 외부 링크를 위해 사용함.

`static` 멤버함수는 객체는 아니지만 사용자 정의 자료형에 속함. 멤버변수도 객체에 속하지 않고 객체외부에 단 하나만 존재함.

`static`을 붙일 시 컴파일 -> 링크 과정에서 내부 링크, 즉 같은 파일에서만 사용할 수 있게 됨

> `static` 키워드를 함수 내에서 선언된 변수에 붙이면 해당 변수는 프로그램이 처음 실행될 때 메모리에 할당되고, 함수가 끝나도 유지됨. <br>
> 다만 파일 내에서 `static` 키워드를 붙이면 해당 변수는 선언된 파일 내에서만 접근 가능함.


다른 파일에 정의된 전역 변수나 함수를 현재 파일에서 사용할 때, `extern` 키워드를 사용하여 해당 변수나 함수가 외부에 정의되어 있다고 컴파일러에게 알림.

## 사용자 정의 자료형

`enum`,    `struct`,   `class` 등이 있음.

```c++
enum {eID_NUM, eID_NAME};

enum class COLOR { RED, GREEN, BLUE };

class MyClassType {
  public:
    MyClass() = default;
    ~MyClass() = default;
    int nID_;
};

struct MyStructType {
  int nNumber;
  std::string strName;
};

MyClassType MyClass;
MyStructType MyStruct;
int nNumber = eID_NUM;
COLOR Color = COLOR::RED;
```

### typedef, using
`typedef`, `using` 을 사용하면 직접 자료형의 별칭을 만들 수 있음. API, Library를 만들 때 유용

### type casting
자료형 변환을 명시적으로 할 수 있는 방법

```c++
int n = (double)1.5; // C 스타일
```

