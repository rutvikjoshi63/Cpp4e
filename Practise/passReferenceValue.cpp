#include<iostream>
#include<math.h>
#include<cmath>
#include<string.h>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int* inputarray(int num){
    int* array = new int[num]; //Heap stores memory of pointer and not the value itself
    /* function:
    int *p = new int();     Allocates some memory in heap with p storing address in stack
    *p = 10;
    Heap:
    20000   10
    Stack:
    p   20000
    delete(p)   to delete memory in heap
    delete[]p   to delete memory of array heap
    p = NULL    p stops pointing 
    */

    cout<<"Enter array values below\n";
    for(int i=0;i<num; i++){
        cin>>array[i];
    }
    cout<<array<<" "<<*array;

    return array;
}

int main(){
    int a = 2;
    int b= 4;
    int* aptr = &a;
    int* bptr = &b;
    swap(aptr,bptr);
    cout<<a<<" "<<b;
//Pass by reference
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int *array = inputarray(n);
    for(int i=0; i<n;i++){
        cout<<endl<<*(array+i);
    }

return 0;
}