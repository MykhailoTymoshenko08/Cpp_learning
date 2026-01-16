#include <iostream>
using namespace std;


//new initialization
//int a = 10;
//int a{10};

//int arr[] = {};
//int arr[]{};


int main(){
    printList({1,2,3,4});
}

void printList(initializer_list<int> nums)  {
    for (int num : nums)    {  //range-based for loop
        cout << num;
    }
}

//for(const int num:nums)

//auto x = 10;     //new type of data
//auto func_name(){}

// //constexpr  //is going before compilating

// smart * and &   include<memory>
//  unique_ptr
//  shared_ptr
//  weak_ptr