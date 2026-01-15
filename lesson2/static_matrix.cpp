#include <iostream>
using namespace std;
#define N 3
#define M 4

void rowSwap();
void colSwap();

int main()  {
    int matrix[N][M] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    //main diagonal  i=j
    //side diagonal  i+j=m-1

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
        
    }
    cout << endl << endl;
    rowSwap();
    cout << endl << endl;
    colSwap();
}

void rowSwap(){
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row1 = 0;
    int row2 = 2;
    for (int i = 0; i < 3; i++)
    {
        int tmp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = tmp;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
        
    }
}

void colSwap(){
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int col1 = 0;
    int col2 = 1;

    for (int i = 0; i < 3; i++)
    {
        int tmp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = tmp;
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
        
    }
}