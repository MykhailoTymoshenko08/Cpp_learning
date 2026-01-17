// Заданий набір ненульових цілих чисел. Вивести суму всіх додатних парних
// чисел з даного набору. Якщо необхідні числа в наборі відсутні, то вивести 0.

#include <iostream>
using namespace std;

int main(){
    int N; cout << "Enter N: "; 
    cin >> N; 
    int *arr = new int[N]; 
    for (int i = 0; i < N; i++) cin >> arr[i];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if(arr[i]>0 && arr[i]%2==0){
            sum += arr[i];
        }
    }
    cout << (sum ? sum : 0);
    delete[] arr;
    return 0;
}