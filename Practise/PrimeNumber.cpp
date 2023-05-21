#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num1){
    int flag;
    for(int i = 2; i< sqrt(num1);i++){
        if (num1%i==0){
            return false;
        }    
    }
    return true;
}

void loopPrime(int num1, int num2){
    for(int i = num2;i<=num1;i++){
        if(isPrime(i)){
            cout<<i<<" Prime "<<endl;
        }
    }
}

void ComparePrime(int num1, int num2){
    if (num1>num2){
        loopPrime(num1, num2);
    }
    else{
        loopPrime(num2, num1);
    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"Prime numbers are\n";
    ComparePrime(a,b);
    return 0;
}