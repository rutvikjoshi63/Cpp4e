#include<iostream>
#include<math.h>
using namespace std;

int factorial(int num1){
    int factorial=1;
    for(int i = 1; i <= num1; i++){
            factorial = factorial * i;
        }
    return factorial;
}

void NCR(int num1,int num2){
    int nCr;
    nCr = factorial(num1)/(factorial(num2)*factorial(num1-num2));
    cout<<"nCr "<<nCr;
}

int main(){
    int num1,num2,nCr;
    cout <<"Hello number for nCr\n";
    cin >>num1>>num2;
    NCR(num1, num2);
    return 0;
}