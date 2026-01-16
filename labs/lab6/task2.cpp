//Для введення задано цілочисельний масив розміру N. Вивести всі парні
//числа, що містяться в даному масиві, в порядку спадання їх індексів, 
//а також їх кількість К.

#include <iostream>
using namespace std;

int main(){
    int *arr;
    int N=0,K=0;
    while(N<=0 || N>1000){
        cout << "Enter N:" << '\n';
        cin >> N;
    }
    arr = new int[N];
    for(int i = 0; i < N; i++)  {
        cout << "Enter the " << i+1 << "th element:";
        cin >> arr[i];
    }
    for(int i = N-1; i >= 0; i--)    {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << ", ";
            K++;
        }
    }
    cout << "Count of even numbers: " << K;
    delete []arr;
}