using namespace std;
#include<conio.h>
#include <iostream>
#include<stdio.h>
  int main() { 
     int i;
     cout << "Please enter your age: \n";
     cin >> i ;
     if(i>=18){
       cout << "You are eligible to vote.\n";
     }
     else{
       cout << "You are not eligible to vote\nPlease wait till you are 18 years old";
     }
      return 0; }
