// Problem III. Given an already sorted array of positive integers, design an algorithm and implement it using a
// program to find whether a given key element is present in the sorted array or not. For an array
// arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on. 
// Once the interval (arr[2k]<key<arr[2k+1]) is found, perform a linear search operation from 
// the index 2k to find the element key.
// (Complexity < O(n), where n is the number of elements need to be scanned for searching):
// Jump Search

#include<iostream>
using namespace std;
int comp=0;
void Jump_Search(int key, int arr[], int size){
    int i=0,j=0;
    comp++;
    if(arr[i]==key){
        cout<<"Present "<<i;
        return;
    }
    else
        i++;
    // Searching at the indexes arr[0], arr[2], arr[4],.....,arr[2^k]
    while(i<size && arr[i]<=key){
        comp++;
        j=i;
        i*=2;
    }
    //The Interval (arr[2^k]<key<arr[2^(k+1)]) is found,
    while(j<=i){   
        comp++;
        if(arr[j]==key){
            cout<<"Present "<<comp;
            return;
        }
        j++;
    }
    cout<<"Not Present "<<comp;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
        Jump_Search(key,arr,size);
        cout<<endl;
    }
    return 0;
}
// test cases:
// 1 5 12 23 36 39 41 41 
// 1 8 21 39 40 45 51 54 68 72 69 
// 1 10 101 246 438 561 796 896 899 4644 7999 8545 7999


