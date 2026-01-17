// 4. Задані ціле число K, а також K наборів ненульових цілих чисел. Кожен набір
// містить не менше двох елементів, ознакою його завершення є число 0. Знайти
// кількість наборів, елементи яких зростають.

#include <iostream> 
using namespace std; 

int main() { 
    int K; 
    cout << "Enter number of sets K: "; 
    cin >> K;

    int countIncreasing = 0; 
    for (int s = 0; s < K; s++) { 
        int prev, curr; 
        bool increasing = true; 
        cin >> prev; 
        while (true) { 
            cin >> curr; 
            if (curr == 0) break; 
            if (curr <= prev) increasing = false; 
            prev = curr; 
        } 
        if (increasing) countIncreasing++; 
    } 
    cout << "Number of increasing sets = " << countIncreasing << endl; 
    return 0;
}