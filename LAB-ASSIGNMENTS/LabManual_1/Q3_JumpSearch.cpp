//PROBLEM 3: JUMP SEARCH

#include<iostream>
#include<cmath>
using namespace std;

void Jump_Search(int key,int arr[],int size){
    int m = sqrt(size);
    int i;
    for(i=0;i<size && arr[i]<=key;i=i+m){
        if(arr[i]==key){
            cout<<"Present at index: "<<i;
            return;
        } 
        if(i>size-1){
            i=size;
        }
    }
    for(int j=i-m+1;j<i;j++){
        if(arr[j]==key){
            cout<<"Present at index: "<<j;
            return;
        }
    }
    cout<<"Not Present"; 
    return;
}

int main(){
    int t;
    cout<<"t=";
    cin>>t;
    while(t--){
        int size;
        cout<<"size=";
        cin>>size;  
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        int key;
        cout<<"key=";
        cin>>key; 
        Jump_Search(key,arr,size);
        cout<<endl;
    }
    return 0;
}

// 101 246 438 561 796 896 899 4644 7999 8545
