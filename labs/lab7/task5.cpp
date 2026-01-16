// Під час розв’язку задач 4 та 5 потрібно використати явну ініціалізацію елементів матриці.
// 5. Дана цілочисельна матриця розміру MхN. Знайти кількість її стовпців, все
// елементи яких різні.

#include <iostream>
using namespace std;
#define M 4
#define N 3
int main(){
    int A[M][N] = { {1, 2, 3}, {4, 5, 6}, {7, 2, 9}, {10, 11, 12} };
    int distinctColumns = 0;
    for (int i = 0; i < N; i++)
    {
        bool allDistinct = true;
        for (int j = 0; j < M; j++)
        {
            for (int k = j+1; k < M; k++)
            {
                if(A[j][i]==A[k][i])    {
                    allDistinct = false;
                    break;
                }
            }
            if (!allDistinct) break;
        }
        if (allDistinct) distinctColumns++;
    }
    cout << distinctColumns;
}