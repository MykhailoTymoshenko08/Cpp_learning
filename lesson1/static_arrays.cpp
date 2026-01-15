#include <iostream>
using namespace std;
#define N 10

int main()  {
    int array[N] = {1,2,3,4,5,6,7,8,9,0};

    //delete element
    //el[5] = el[6]  <=
    //add element
    //el[6] = el[5]  =>

    //cycle swift
    //int x = array[N-1];
    //for (int i = N-1; i > 0 ; i--)
    //{
    //    array[i] = array[i-1];
    //}
    //array[0] = x;
    
    //el swap(inversion)
    // for (int i = 0; i < N/2; i++)
    // {
    //     int T = array[i];
    //     array[i] = array[N-1-i];
    //     array[N-1-i] = T;
    // }
    

    for(int i = 0; i<10; i++)    {
        cout<<array[i];
    }
}