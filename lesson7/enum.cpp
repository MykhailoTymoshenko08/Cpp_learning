#include <iostream>
using namespace std;

int main(){
    enum class Color{
        RED = 0xFF0000,
        GREEN = 0x00FF00
    };
    Color c = Color::RED;


    struct Circle   {
        int age;
        Color clr;
    };
    // cout << Circle.Color.RED; ??
    // static_cast ??


}