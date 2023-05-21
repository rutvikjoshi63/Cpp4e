#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

int factorial(int num1){
    int factorial=1;
    for(int i = 1; i <= num1; i++){
            factorial = factorial * i;
        }
    return factorial;
}

void output(int num1){
    
    while (num1>1)
    {
        cout<< num1<<" " <<factorial(num1)<<endl;
        num1 -=1;
        
    }
    
}
int main(){
    int num1;
    cout<<"Hello number ";
    cin>>num1;
    output(num1);
    cout<<"Factorial of all numbers";
    return 0;
}