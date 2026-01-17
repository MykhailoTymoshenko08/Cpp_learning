// 4. Задані ціле число K, а також K наборів ненульових цілих чисел. Кожен набір
// містить не менше двох елементів, ознакою його завершення є число 0. Знайти
// кількість наборів, елементи яких зростають.
// Модифікувати задачу 4 (+0,5 бали) з використанням функцій обробки потоків,
// що розглядалися у лекції «Потокове введення/виведення». Вважаємо, що 1)
// кількість наборів К у файлі не задана: 2) в кінці кожного набору немає 0; 3)
// кількість та довжина наборів довільна.   


#include <iostream> 
#include <iomanip> 
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
            if (!(cin >> curr)) {
                cin.clear(); 
                cin.ignore(1000, ' '); 
                continue; 
            } 
            if (curr == 0) break; 
            if (curr <= prev) increasing = false; 
            prev = curr; 
        } 
        cout << setw(10) << "Set " << s+1 << " -> " << (increasing ? "Increasing" : "Not increasing") << endl;
        if (increasing) countIncreasing++; 
    } 
    cout << "Total increasing sets = " << countIncreasing << endl; return 0; 
}