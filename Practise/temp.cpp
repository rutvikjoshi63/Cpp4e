#include<iostream>
#include<math.h>
#include<cmath>
#include<string.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int num1[n];
    cout<<"Enter array\n";
    for(int i=0;i<n;i++){
        cin>>num1[i];
    }
    /* 
    Bubble sort algorithm
    for(int i=0;i < n;i++){
        for(int j = 0; j<n-i; j++){
            if(num1[j]>num1[j+1]){
                int temp = num1[j];
                num1[j] = num1[j + 1];
                num1[j + 1]= temp;
            }
        }
    }
    Insertion sort
   for(int i = 1;i<n;i++){
        int current = num1[i];
        int j = i-1;
        while(num1[j]>current && j>=0){
            num1[j+1] = num1[j];
            j--;
        }
        num1[j+1]= current;
   }
   */
   
    for(int i=0;i<n;i++){
        cout<<num1[i]<<" ";
    }
    return 0;
}