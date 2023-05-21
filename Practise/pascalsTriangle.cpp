#include<iostream>
#include<math.h>
using namespace std;

int factorial(int num1){
    int factorial=1;    
    if(num1<=0){
        return 1;
    }
    else{
        for(int i = 1; i <= num1; i++){
                factorial = factorial * i;
            }
    }
    return factorial;
}

int NCR(int num1,int num2){
    int nCr;
    nCr = factorial(num1)/(factorial(num2)*factorial(num1-num2));
    return nCr;
}

void PascalTriangle(int num1){
    for(int i = 0; i< num1;i++){
        for(int j = 0; j<=i;j++){
            cout<<" "<<NCR(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int num1;
    cout <<"Hello number for Triangle\n";
    cin >>num1;
    PascalTriangle(num1);
    return 0;
}