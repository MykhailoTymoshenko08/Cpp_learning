// 3. Для матриці Н розміром KxT визначити та вивести на екран: 1) суму
// елементів для кожного рядка; 2) добуток елементів для кожного стовпця.

#include <iostream>
using namespace std;

int main(){
    float **H;
    int K, T;
    cout << "Entre K: ";
    cin >> K;
    cout << "Entre T: ";
    cin >> T;
    H = new float *[K];
    for (int i = 0; i < K; i++)
    {
        H[i] = new float[T];
    }
    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < T; j++)
        {
            cout << "Enter the " << i << j << "th elemet of matrix H: ";
            cin >> H[i][j];
        }
        
    }
    for (int i = 0; i < K; i++)
    {
        float sum=0;
        for (int j = 0; j < T; j++)
        {
            sum += H[i][j];
        }
        cout << "Row" << i+1 << ", Sum = " << sum << endl;
    }

    for (int i = 0; i < T; i++)
    {
        float prod = 1;
        for (int j = 0; j < K; j++)
        {
            prod *= H[i][j];
        }
        cout << "Column" << i+1 << ", Product = " << prod << endl;
    }
}