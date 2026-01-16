#include <iostream>
#include <memory>
using namespace std;

int main(){
    unique_ptr<int> ptr = make_unique<int>(10);
    unique_ptr<int[]> arr = make_unique<int[]>(10);

    
}