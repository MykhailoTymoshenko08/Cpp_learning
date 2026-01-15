#include <iostream>
using namespace std;
#define N 3
#define M 3

//void transposition(int (&matrix)[M][N]);
void transposition();
int main(){
    int matrix[N][M] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    //printing our start matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
        
    }

    //trasposition
    cout << endl << endl;
    transposition();
    cout << endl << endl;

    cout << "Task ended";
}


void multi(){
    int const n = 3;
    int const m = 3;
    int const k = 3;
    int A[n][m];
    int B[m][k];
    int C[n][k];


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int p = 0; p < m; p++)
            {
                C[i][j] += A[i][p] * B[p][j];
            }
            
        }
        
    }
    

}



//void transposition(int (&matrix)[M][N]){
void transposition(){
    int matrix[N][M] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
    

    for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
            
        }
}