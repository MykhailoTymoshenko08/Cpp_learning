// 1. Задане число N і набір з N додатних дійсних чисел. Вивести на екран для
// кожного числа з набору значення, якого йому не вистачає до найближчого
// більшого до нього цілого, а також число, яке є найближчим до свого більшого
// цілого.

#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    float *arr = new float[N];
    for (int i = 0; i < N; i++) { 
        cin >> arr[i]; 
    }

    for (int i = 0; i < N; i++) { 
        int ceilVal = ceil(arr[i]);
        float diff = ceilVal - arr[i];
        cout << "Number: " << arr[i] 
        << " -> ceil: " << ceilVal 
        << ", diff: " << diff << endl; 
    }
    delete []arr;
    return 0;
}