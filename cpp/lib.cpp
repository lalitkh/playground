#include "lib.hpp"
#include <iostream>
#include <string.h>


// swap 2 integers using Pointer

void swap(int *x, int *y){
    
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
    
}

// swap 2 integers using C++ references

void swap_by_reference(int& i, int& j){
    
    int temp;
    
    temp = i;
    i = j;
    j = temp;
    
}

// generic function to read input from console

static void read_number(int &n) {
    std::cout<<"Enter a number : ";
    std::cin>>n;
    std::cout<<"\n";
}

// Find GCD of two integers using subtract from bigger number
// ex. GCD of 12 & 45 is 3

void find_gcd(){

  std::cout<<"Enter two numbers \n";

  int a , b ;

  std::cin>>a>>b;

  while(a != b){

    if (a>b) a = a-b;
    else if(b>a) b = b-a;
  }

  std::cout<<"GCD : "<<a<<"\n\n";
}

// Find GCD of two integers using Mod
void find_gcd2(){
    
    
  int R;
  int a , b ;

  std::cout<<"Enter two numbers \n";
  std::cin>>a>>b;
  std::cout<<"\n";
  while ((a % b) > 0)  {
    R = a % b;
    a = b;
    b = R;
    std::cout<<R<<" "<<a<<" "<<b<<"\n";
  }
  std::cout<<"\nGCD : "<<b<<"\n\n";
}

// check if a number is palindrome or not
// a number is palindrome if it`s reverse is the number itself
// ex . 3663
void check_palindrome_number(){

  int n , temp=0,rev=0;
  
  read_number(n);
  temp = n;

  while(n>0){
    int r = n%10;
    rev = rev*10 + r;
    n = n/10;
  }
  if ( rev == temp) std::cout<<"\nPalindrome Number\n\n";
  else std::cout<<"Not a Palindrome Number\n\n";

}

// reverse an integer
// ex 345 -> 543
void reverse_number(){

  int n ,rev=0;
  
  read_number(n);
  
  while(n>0){
    int r = n%10;
    rev = rev*10 + r;
    n = n/10;
  }
  std::cout<<"Reversed Number is :  "<<rev<<"\n\n";

}

// check if a given number is Armstrong number or not
// sum of cubes of individual digit is equal to number
// ex 153 , 1^3+5^3+3^3 = 153
void check_armstrong_number(){

  int n ,temp, sum =0;
  
  read_number(n);
  temp = n;

  while(n>0){
    int r = n%10;
    sum = sum + (r*r*r);
    n = n/10;
  }
  if ( sum == temp) std::cout<<"Armstrong Number\n\n";
  else std::cout<<"Not a Armstrong Number\n\n";

}
// prints table of given number

void display_multiplication_table(){
    
    int n;
    read_number(n);
    for (int i=1; i<=10; i++){
        std::cout<<n<<" x "<<i<<"  =  "<<n*i<<std::endl;
    }
    std::cout<<"\n\n";
}

// sum of n natural numbers

void display_sum(){
    int i=1, n, sum=0;
    read_number(n);
    
    while (i<=n) {
        sum = sum +i;
        i++;
    }
    std::cout<<"Sum of "<<n<<" natural numbers is = "<<sum<<"\n\n";
    
}


// calculate power of a number using recursion
// pow(m,n) = m**n
// 2**9 == 2*(2**4)**2

int power_recursion(int m , int n){
    
    if (n==0)
        return 1;
    
    if (n%2 == 0)
        return (power_recursion(m*m, n/2));
    else
        return m*(power_recursion(m*m, (n-1)/2));
    
}

//##############################################################################

//                  Fibonacci Problems

//##############################################################################

// find nth term of fibonacci series using recursion O(2^n)

int fib(int n ){
    
    if (n == 0 ) return 0;
    else if (n == 1) return 1;
    else return fib(n-1)+fib(n-2);
    
}

// print fibonacci series using for loop
void fib_series(int n ){
    int t0 = 0, t1 = 1, fib=0;
    
    
    for (int i=0;i<n;i++){
        
        if (i<=1) fib = i;
        else{
            fib = t0 + t1;
            t0 = t1;
            t1 = fib;
        }
        std::cout<<fib<<" ";
    }
    
    std::cout<<"\n\n";
}

// Below method to get fibonnacci number using memoization

int F[10] = {-1};

int mfib(int n){
    if(n <= 1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1)
            F[n-2] = mfib(n-2);
        
        if(F[n-1] == -1)
            F[n-1] = mfib(n-1);
        
        F[n] = F[n-2]+F[n-1];
        return F[n];
    }
}

// find factorial n! of a given number

void find_factorial(){
    int n;
    unsigned long long int fact=1;
    read_number(n);
    
    while (n>0) {
        fact = fact*n;
        --n;
    }
    std::cout<<"Factorial = "<<fact<<"\n\n";
}

// ********* check if a given number is perfect number *****

//Perfect number, a positive integer that is equal to the sum of its proper divisors.
//The smallest perfect number is 6, which is the sum of 1, 2, and 3.
//Other perfect numbers are 28, 496, and 8,128

void check_perfect_number(){
    int i=1, n, sum=0;
    read_number(n);
    
    while (i < n) {
        if ((n % i) == 0){
            sum = sum + i;
        }
        ++i;
    }
    
    if (sum == n)
        std::cout<<"Perfect Number \n\n";
    else
        std::cout<<"Not a Perfect Number \n\n";
    
}

// Leap Year
// A year would be a leap year if it is divisible by 4 ,
// if year is centrury year means divisible by 100
// then it should be divisible by 400 also

void check_leap_year(){
    int n ;
    read_number(n);
    
    if ((n % 4) == 0){
        if ((n % 100) == 0)
            if ((n % 400) == 0 )
                std::cout<<"Leap Year\n\n";
            else
                std::cout<<"Not a Leap Year\n\n";
        else
            std::cout<<"Leap Year\n\n";
    }
    else
        std::cout<<"Not a Leap Year\n\n";
}

// check if a number is prime or not

void check_prime(){
    
    int n , prime = true;
    read_number(n);
    
    if (n==1) std::cout<<"Not a Prime Number \n\n";
    else{
        int i =2;
        while (i<n) {
            if ((n%i) == 0){
                prime = false;
                break;
            }
            else ++i;
        }
        if (prime) std::cout<<"Prime Number \n\n";
        else std::cout<<"Not a Prime Number \n\n";
    }
}

// Factors of a given number

void find_factors(){
    
    int i=1,n ;
    read_number(n);
    
    while (i<n) {
        if ((n%i)==0) std::cout<<i<<" ";
        ++i;
    }
    std::cout<<"\n\n";
}


// display digits of a given number in reverse order

void display_reverse_digits(){
    int n;
    read_number(n);
    
    while (n>0) {
        std::cout<<(n%10)<<" ";
        n = n /10;
    }
    std::cout<<"\n\n";
}


// Generic function to create an Array of given size

int * create_int_array(int size){
        
    int *arr;
    arr = new int[size];
    
    std::cout<<"Enter "<<size<<" Integers\n";
    
    for (int i=0 ; i <size;i++){
        std::cin>>arr[i];
    }
    
    std::cout<<"\nArray of size "<<size<<" created\n\n";
    
    for (int i=0 ; i <size;i++){
        std::cout<<arr[i]<<" ";
    }
    
    std::cout<<"\n\n";
    return arr;
}

// find max element in an Array of Inetegers

void find_max_array(){
    
    int *arr;
    int size, max = INT_MIN;
    std::cout<<"Enter the size of Array\n";
    std::cin>>size;
    
    arr = new int[size];
    
    std::cout<<"\nEnter elements of Array\n";
    
    for (int i=0 ; i <size;){
        int temp =0;
        std::cin>>temp;
        if (temp>max) max = temp;
        *(arr+i) = temp;
        ++i;
    }
    
    std::cout<<"\nArray\n\n";
    
    for (int i=0 ; i <size;){
        std::cout<<*(arr+i)<<" ";
        ++i;
    }
    
    std::cout<<"\n\n";
    std::cout<<"Max number of Array is : "<<max;
    std::cout<<"\n\n";
}

// Linear search

void linear_search(){
    int *arr;
    arr = create_int_array(5);
    
    int key;
    bool found=false;
    
    std::cout<<"Enter an element to Search: ";
    std::cin>>key;
    
    for (int i=0; i < 5;i++){
        if (arr[i]==key){
            found=true;
            break;
        }
    }
    
    if (found) std::cout<<"\nGiven Element Found in Array\n\n";
    else std::cout<<"\nGiven Element NOT Found in Array\n\n";
    
    delete []arr;
    arr = nullptr;
    
}

// Linear search

void binary_search(){
    int *arr;
    arr = create_int_array(5);
    
    int low = 0 , high= 5;
    int mid = 0;
    int key;
    bool found=false;
    
    std::cout<<"Enter an element to Search: ";
    std::cin>>key;
    
    
    while (low<=high) {
        mid = (low+high)/2;
        
        if (arr[mid] == key){
            found = true;
            break;
        }
        else if (arr[mid] > key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    
    
    if (found) std::cout<<"\nGiven Element Found in Array\n\n";
    else std::cout<<"\nGiven Element NOT Found in Array\n\n";
    
    delete []arr;
    arr = nullptr;
    
}

void print_array_using_auto(){
    
    int arr[6][4] = {4,2,6,1,8,9,4,2,3};
    
    for (auto& x : arr){
        for (int y : x){
            std::cout<<y<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n\n";
}

void string_tokenize(){
    char s[] = "x=10;y=20;z=30";
    
    char * token = strtok(s, ";");
    while (token != NULL) {
        std::cout<<token<<"\n";
        token = strtok(NULL, ";");
    }
    
    
    std::cout<<"\n\n";
}

void convert_to_uppercase(){
    
    std::cout<<"Enter your name: ";
    std::string s ;
    std::cin>>s;
    
    std::string::iterator it = s.begin();
    
    while (it != s.end()) {
        *it = *it - 32;
        it++;
    }
    std::cout<<"\n\nYour Upper Case Name is \n\n"<<s<<"\n\n";
}

void count_vowels_consonants(){
    std::cout<<"Enter your name: ";
    std::string s ;
    std::cin>>s;
    
    int vowels=0,consonants = 0;
    
    
    for(char& c : s){
        if (c =='a' || c=='e' || c =='i' || c=='o' || c=='u') vowels++;
        else consonants++;
    }
    std::cout<<"\n\nVowels : "<<vowels<<"\nConsonants : "<<consonants<<"\n\n";
}

void reverse_string_check_palindrom(){
    
    std::cout<<"Enter your name: ";
    std::string s , temp;

    getline(std::cin,s);
    temp = s;
    
    int len=(int )s.length();
    
    for (int i=0; i < len/2; i++){
        char temp;
        temp = s[len-i-1];
        s[len-i-1] = s[i];
        s[i] = temp;
    }
    
    std::cout<<"\nReversed String of your name is : "<<s<<"\n\n";
    
    
    if ((s.compare(temp)) == 0) std::cout<<"Your name is a Palindrome String"<<"\n\n";
    else std::cout<<"Your name is a NOT Palindrome String"<<"\n\n";
    
    
}





class Complex{
    
public:
    int real;
    int img;
    
    Complex operator+(Complex c){
        Complex temp;
        temp.real = real+c.real;
        temp.img = img+c.img;
        return temp;
    }
};

class Base{
public:
    Base(){
        std::cout<<"Default Constructor of Base Class called.\n\n";
    }
    Base(int b){
        std::cout<<"Parameterized Constructor "<<b<<" of Base Class called.\n\n";
    }
    
    // Pure Virtual Function
    
    virtual void start()=0;
    
    void stop(){
        std::cout<<"Base Class stopped.\n\n";
    }
    
    virtual void fun(){
        std::cout<<"Fun of Base Class called.\n\n";
    }
    
    void display(){
        std::cout<<"Display of Base Class called.\n\n";
    }
    
    virtual ~Base(){
        std::cout<<"Destructor of Base Class called.\n\n";
    }
};

class Derived:public Base{
    
public:
    Derived(){
        std::cout<<"Default Constructor of Derived Class called.\n\n";
    }
    Derived(int d){
        std::cout<<"Parameterized Constructor "<<d<<" of Derived Class called.\n\n";
    }
    Derived(int b, int d):Base(b){
        std::cout<<"Parameterized Constructor "<<d<<" of Derived Class called.\n\n";
    }
    
    void start(){
        std::cout<<"Derived Class Started.\n\n";
    }
    
    void fun(){
        std::cout<<"Fun of Derived Class called.\n\n";
    }
    
    void display(){
        std::cout<<"Display of Derived Class called.\n\n";
    }
    
    ~Derived(){
        std::cout<<"Destructor of Derived Class called.\n\n";
    }
};

class Rectangle{
    
private:
    int length;
    int breadth;
    
public:
    
    void set_length(int length){
        if (length>0) this->length= length;
        else std::cout<<"length should be greater than zero \n";
    }
    void set_breadth(int breadth){
        if (breadth>0) this->breadth= breadth;
        else std::cout<<"breadth should be greater than zero \n";
    }
    float area(){
        return length*breadth;
    }
    
    float perimeter();
};



//*********************************************************
//
//  Stack Implementation using Linked List
//
//*********************************************************


class Node{
public:
    int data;
    Node *next;
};

class Stack{
    
private:
    Node *top;
public:
    Stack(){
        top = NULL;
    }
    void push(int x);
    int pop();
    void display();
    
};

void Stack::push(int x){
    
    Node *temp = new Node;
    
    if (temp == NULL)
        std::cout<<"Stack is Full\n";
    else{
        temp->data=x;
        temp->next=top;
        top=temp;
    }
}

int Stack::pop(){
    
    int x = -1;
    
    if (top==NULL)
        std::cout<<"Stack is Empty\n";
    else{
        Node *temp = top;
        x = top->data;
        top=top->next;
        delete temp;
    }
    return x;
}

void Stack::display(){
    
    Node *temp = top;
    
    while (temp!=NULL) {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<std::endl;
}

void bubble_sort(int arr[], int n){
   
    for(int i=0 ; i<n-1; i++){
        for(int j=0; j<n-1-i;j++){
            if (arr[j+1] < arr[j]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void insertion_sort(int arr[], int n){
    
    for(int i=1; i<n; i++){
        
        int j = i-1;
        int key = arr[i];
        
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void selection_sort(int arr[], int n){
    int i,j,k;
    
    for(i=0; i < n-1; i++){
        for(j=k=i; j < n; j++){
            
            if (arr[j]<arr[k]){
                k=j;
            }
        }
        swap(&arr[i], &arr[k]);
    }
}
class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i=m-1;
        int j=n-1;
        int k = m+n-1;
        while(i >=0 && j>=0)
        {
            if(A[i] > B[j])
                A[k--] = A[i--];
            else
                A[k--] = B[j--];
        }
        while(j>=0)
            A[k--] = B[j--];
    }
};
