#include <iostream>
#include "lib.hpp"

using namespace std;

int main(void) {
    
//    display_multiplication_table();
//    display_sum();
//    find_factorial();
//    check_perfect_number();
//    check_leap_year();
//    check_prime();
//    find_factors();
//    display_reverse_digits();
//    check_armstrong_number();
//    reverse_number();
//    check_palindrome_number();
//    find_gcd();
//    find_gcd2();
//    find_max_array();
//    create_int_array(5);
//    linear_search();
//    binary_search();
//    print_array_using_auto();
//    string_tokenize();
//    convert_to_uppercase();
//    count_vowels_consonants();
//    reverse_string_check_palindrom();
//    cout<<power_recursion(2,4)<<endl;
//    cout<<fib(8)<<endl;
//    fib_series(8);
//     cout<<mfib(8)<<endl;
    
//********** Sortings Test *************//
    int arr[] = {8,3,5,2,4,9,1};
    
//    bubble_sort(arr, 7);
    selection_sort(arr, 7);
    
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n\n";
    
    return 0;
}
