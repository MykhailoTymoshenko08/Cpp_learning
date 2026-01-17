// 3. Задані цілі числа K, N, а також K наборів по N цілих чисел в кожному наборі.
// Для кожного набору виконати таку дію: якщо в наборі міститься число 2, то
// вивести суму його елементів; якщо в наборі немає двійок, то вивести 0.

#include <iostream>
using namespace std;

int main(){
    int K,N;
    cin >> K >> N;
    int **matrix;
    matrix = new int* [K];
    for (int i = 0; i < K; i++){
        matrix[i] = new int[N];
    }
    for (int i = 0; i < K; i++){
        for (int j = 0; j < N; j++){
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < K; i++){
        bool has_two = false;
        int sum = 0;
        for (int j = 0; j < N; j++){
           sum += matrix[i][j];
           if (matrix[i][j] == 2) has_two = true; 
        }
        cout << (has_two ? sum : 0) << endl;
    }

    for (int i = 0; i < K; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}