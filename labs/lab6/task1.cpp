#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int N = 10;
    int arr[N];
    for (int i = 1; i <= N; i++){
        arr[i-1] = pow(2, i);
        cout<< arr[i-1] << " ";
    }
}