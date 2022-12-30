#include<iostream>
using namespace std;

/**
 * just check for calculation
 * 10 % 2 = 0;
 * 10 % 3 = 1
 * 10 % 4 = 0
 * 
*/
int primeNumber(int number){
    int i = 2;
   while(i < number){
     if(number % 2 == 1){
        cout<<i<<endl;
     }
     i++;
   }
   return 0;
}
int main(){
    int number;
    cout<< "Please Enter the number"<< endl;
    cin>> number;
    primeNumber(number);
    return 0;
}