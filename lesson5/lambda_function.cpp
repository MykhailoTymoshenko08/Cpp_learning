#include <iostream>
using namespace std;
//functional proggraming
#include <fuctional>

int main(){
    auto square = [](int x) {return x*x;};

    int a = 10, b = 20;
    auto sum = [a, b]() {return a+b;};
    auto doble = [&a](){a*=2;};

    function<int(int, int)> multiply = [](int a, int b) {
        return a*b;
    }
    

    int result = operate(4, 3, [](int a, int b) -> int) {return a+b;};
    
}

    int mult(int a, int b)  {
        return a*b;
    }

    int operate(int x, int y, int(*mult)(int. int)) {
        return mult(x, y)
    }