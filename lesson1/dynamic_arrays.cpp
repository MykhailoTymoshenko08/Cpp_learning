#include <iostream>
using namespace std;
#define N 10

int main()  {
    int array[N] = {1,2,3,4,5,6,7,8,9,0};

    //int *p = array;
    // == int p = &array[0];   
    // &array[i] = A+i


    //creating dynamic array
    //float *p;
    // int n;
    // cin >> n;
    // while(n<0 && n>1000)    {
    //     cin >> n;
    // }
    // p = new float [n];

    

    void foo(float A[N]);
    void wow(float *A, size_t size);  //size_t -- unsigned type     unsigned ind


    for(int i = 0; i<10; i++)    {
        cout<<array[i];
    }
    //delete []p;
}