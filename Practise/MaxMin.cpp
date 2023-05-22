#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

void MaxMin(int array[],int n){
    int Max = INT8_MIN;
    int Min = INT8_MAX;
    for(int i = 0; i<n;i++){
        if(Max < array[i]){
            Max = array[i];
        if (Min > array[i])
        {
            Min = array[i];
        }
        
        }
    }
    cout<<"Max "<<Max<<"Min= "<<Min;
    
}

int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    MaxMin(array,n);

}