#include<iostream>
#include<math.h>
#include<cmath>
#include<string.h>

using namespace std;

//int selectionsort(int num1[],int n){
//    static int array = num1;
//    for(int i = 0; i < n; i++){
//            cout<<array[i];
//        }
//    for(int i = 0; i < n-1; i++){
//        for(int j = i+1 ;j< n; j++){
//            if(array[i]> array[j]){
//                int temp = array[i];
//                array[i]=array[j];
//                array[j] = temp;
//            }
//        }
//    }
//    return array;
//}
int* bubblesort(int* num1, int n){ 
    
    for(int i=0;i < n;i++){
        for(int j = 0; j<n-i; j++){
            if(*(num1+j)>*(num1+j+1)){
                int temp = *(num1+j);
                *(num1+j) = *(num1+j+1);
                *(num1+j+1)= temp;
            }
        }
    }
    cout<<"Bubble sorting done:\n";
    for(int i=0;i<n; i++){
        cout<<num1[i]<<endl;
    }
    return 0;
}
int* inputarray(int num){
    int* array = new int[num];
     cout<<"Enter array values below\n";
    for(int i=0;i<num; i++){
        cin>>array[i];
    }
    cout<<array<<" "<<*array;

    return array;
}
int main(){
    string sort = "selection sort\n";
    cout<<"Type of sort available\n";
    cout<<sort;//Need to include searchtype()
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int *array = inputarray(n);
    for(int i=0; i<n;i++){
        cout<<endl<<*(array+i);
    }
    cout<<endl;
    int *sortedarray = bubblesort(array,n);
    //for(int i=0; i<n;i++){
    //    cout<<endl<<*(sortedarray+i);
    //}


    //int* arrary = arrary;
    //cout<<"Sorted array\n ";
    //int* arrary2 = selectionsort(arrary,n);
    //for(int i =0; i< n ; i++){
    //    cout<<arrary2[i]<<endl;
    //}
    return 0;



}