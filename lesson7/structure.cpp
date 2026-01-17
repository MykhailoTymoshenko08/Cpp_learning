#include <iostream>
using namespace std;

int main(){
    struct person
    {
        int age;
        string name;
    };
    person person1;
    person1.age = 17;
    person1.name = "Mykhailo";


    const int n = 5;
    struct students{
        string name;
        int age;
    };
    students group[n];
    for (int i = 0; i < n; i++)
    {
        cout << group[i].name;
    }
    
    //students   *p;
    //p = &s1
    //*p.name   or   p->name
    //students funcName(students &a, students &b){
    //  students temp;
    //  temp.name = ...
    //}
    
}