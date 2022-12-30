#include<iostream>
using namespace std;
// /**
//  * @descriprions print the prime number
//  * @param n is a number
//  * @return true of false 
//  * 
// */
bool isPrime(int number){
    for(int i = 2; i<number; i++){ 
        if(number % i == 0){
            return false;
        }
    } 
    return true;
}

int main(){
    int n;
    cout<< " please enter the numebr check for prime or not"<<endl;
    cin>> n;
    if(isPrime(n)){
        cout<< "This is the prime number";
    }else{
        cout<<"not prime number";
    }
    return 0;
}