//3. Для введення задано цілочисельний масив А розміру N і ціле число К (1 ≤ K
//≤ N). Вивести елементи масиву з порядковими номерами, що є кратними до K:
//АК, A2К, А3К, ... Оператор умови не використовувати.

#include <iostream>
using namespace std;

int main(){
    int *A;
    int N=0,K=0;
    while(N<=0 || N>1000){
        cout << "Enter N:" << '\n';
        cin >> N;
    }
    A = new int[N];
    for(int i = 0; i < N; i++)  {
        cout << "Enter the " << i+1 << "th element:";
        cin >> A[i];
    }
    while (K < 1 || K > N)
    {
        cout << "Enter K: ";
        cin >> K;
    }
    for(int i = K-1; i < N; i+=K)   {
        cout<< A[i] << " ";
    }
    delete []A;
}