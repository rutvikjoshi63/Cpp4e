#include<iostream>
#include<math.h>
#include<cmath>
#include<string.h>

using namespace std;

int linearsearch(int array[],int n, int key){
    for(int i = 0; i<n;i++){
        if(key == array[i]){
            return i;
        }
    }
    return -1;
    
}

int binarysearch(int array[],int n, int key){
    int start = 0, end = n;
    while(start <= end){
        int mid = (start + end )/2;
        if(array[mid] == key){
            return mid;
        }
        else if (key> array[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }        
    }
    return -1;
    
}

//string* searchtype(){
//    string* search[1] = {"linear"};
//    return search;
//}

int main(){
    string search = "l";
    cout<<"Type of search available";
    cout<<"linear(l)";//Need to include searchtype()
    int n,key;
    cout<<"Enter size of array";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter number to search";
    cin>>key;

    cout<<"Index "<<binarysearch(array,n,key);
    return 0;



}