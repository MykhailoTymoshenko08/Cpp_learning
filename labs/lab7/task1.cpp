// 1. Сформувати цілочисельну матрицю розміру MхN, у якій всі елементи J-го
// стовпця мають значення Т · J (J = 0, N-1), де Т задає користувач.

#include <iostream>
using namespace std;

int main(){
    int **A;
    int M,N,T;
    cout << "Enter M: ";
    cin >> M;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter T: ";
    cin >> T;

    A = new int*[M];
    for (int i = 0; i < M; i++)
    {
        A[i] = new int [N];
    }
    for(int i = 0; i < M; i++)  {
        for(int J = 0; J < N; J++)  {
            A[i][J] = T*J;
            cout << A[i][J];
        }
        cout << endl;
    }
    for (int i = 0; i < M; i++)
    {
        delete [] A[i];   
    }
    delete [] A;
    cout << "Task ended";
}