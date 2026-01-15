#include <iostream>
using namespace std;
#define N 3
#define M 4

void rowSwap();
void colSwap();

int main()  {
    float **A;
    int m,n;
    cin >> m >> n;
    A = new float* [m];
    for (int i = 0; i < m; i++)
    {
        A[i] = new float [n];  
    }
    // A[m][n] == *(*(A+i)+j)

    //double a[N][M]
    //boo(a)
    
    //void boo (double (&arr)[M][N]);
    //void boo (double arr[][M])
    //void boo (double (*arr) [M])

    for (int i = 0; i < m; i++)
    {
        delete [] A[i];   
    }
    delete [] A;
    
    
    cout << "Task ended";
}