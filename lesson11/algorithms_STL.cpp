#include <iostream>>
using namespace std;


//#include <algorithm>
//  find()
//  count()
//  min/max_element()
//  find_if()
//  count_if()
//  for_each( it_beg, it_end, oper )   //void oper (elem) { ... }
//  for_each( it_beg, it_end, oper )   //void oper (&elem) { ... }
//  transform()
//  transform( it_from_beg, it_from_end, it_to_beg, oper ) //void oper (elem) { ... }
//  transform( it_from_beg, it_from_end, it_2from_beg, it_result_beg oper)
//  copy()
//  replace()
//  replace_if()
//  replace_copy()
//  replace_copy_if()
//  fill()
//  fill_n()
//  remove()
//  remove_if()
//  remove_copy()
//  remove_copy_if() 
//  unique()
//  unique_copy()
//  reverse()
//  reverse_copy()
//  rotate()
//  rotate_copy()
//  next_permutation()
//  prev_permutation()
//  shuffle()
//  partition()
//  stable_partition()
//  sort ()
//  stable_sort()
//  partial_sort()
//  nth_element()
//  binary_search()
//  includes()
//  lower_bound()
//  upper_bound()   
//  equal_range()
//  merge()
//  inplace_merge()
//  set_union()
//  set_intersection()
//  set_difference()
//  set_symmetric_difference()
//  accumulate()
//  inner_product()
//  adjacent_difference()
//  partial_sum()   



//#include <functional>
//  plus<>()
//  minus<>()
//  multiplies <>()
//  divides <>()
//  modulus <>() — %
//  negate <>()


//#include <iterator>
//  back_inserter(container)
//  front_inserter(container)
//  inserter(container, poition)

//  istream_iterator<int>()    

#include <vector>
#include <algorithm>
#include <iterator>

int main(){
    // vector<int> V = {-2, 1, 2, 3, 2, -8, 4, 2, -5, 9, 11};
    // for(int i : V){
    //     cout << i << " ";
    // }
    // cout << "Count of 2: "<< count(V.begin(), V.end(), 2);  //V.end = pre last el 

    vector<int> F;
    cout<<"Input data: ";
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(F));
    cout<<"Output data: ";
    copy(F.begin(), F.end(), ostream_iterator<int>(cout, " "));

}