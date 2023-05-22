#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

int* input(int num1){
    cout<<"Enter array values below\n";
    int* arrary = new int[num1];
    for(int i = 0; i < num1; i++){
            cin>>arrary[i];
        }
    //for(int i = 1; i <= num1; i++){
    //        cout<<arrary[i]<<endl;
    //    }
    return arrary;
}

//void output(int num1){
//    
//    while (num1>1)
//    {
//        cout<< num1<<" " <<factorial(num1)<<endl;
//        num1 -=1;
//        
//    }
//    
//}
int main(){
    int n;
    cout<<"Size of array? "<<endl;
    cin>> n;
    cout<<"Size of array "<<n<<endl;
    int* arrary= input(n);
    for(int i=0;i<n;i++){
        cout<<arrary[i]<<" ";
    }
   
    return 0;
}