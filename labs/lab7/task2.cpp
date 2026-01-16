// 2. Для матриці С розміром NxM обчислити та вивести на екран кількість
// парних від’ємних елементів.

#include <iostream>
using namespace std;

int main(){
    float **C;
    int N,M,count=0;
    cout << "Entre N: ";
    cin >> N;
    cout << "Entre M: ";
    cin >> M;
    C = new float*[M];
    for(int i = 0; i < M; i++)  {
        C[i] = new float [N];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "Enter the " << i << j << "th elemet of matrix C: ";
            cin >> C[i][j];
            if(fmod(C[i][j], 2)==0 && C[i][j]<0) {
                count++;
            }
        }
        
    }
    cout << count;
    return 0;
    
}