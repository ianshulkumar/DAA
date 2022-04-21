// INPUT: 
// 10
// 123 656 54 765 344 514 765 34 765 234 
// 3 
// OUTPUT:   
// 3th Smallest: 123
// 3th Largest: 656
#include<iostream>   
using namespace std; 

int partition(int a[],int low,int high){
    int pivot = a[low];
    int i = low+1;
    int j = high;
    do{
        while(a[i]<=pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<j)
            swap(a[i],a[j]);
    }while(i<j); 
    swap(a[low],a[j]);
    return j; 
} 
void quickSortSmallest(int a[],int low,int high,int n,int k){
    if(low<high){
        int partitionIndex = partition(a,low,high);
        if(partitionIndex == k)
        {
            cout<<k<<"th Smallest: "<<a[k-1]<<endl;
            cout<<k<<"th Largest: "<<a[n-k+1]<<endl;    
        }
        else if(k<partitionIndex)
            quickSortSmallest(a,low,partitionIndex-1,n,k);
        else if(k>partitionIndex)
            quickSortSmallest(a,partitionIndex+1,high,n,k); 
    }     
}
   
int main(){  
    int t;  
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n]; 
        for(int i=0;i<n;i++)
            cin>>a[i];
        int k;
        cin>>k;
        quickSortSmallest(a,0,n-1,n,k); 

    }
    return 0; 
}
 
// 65 110 115 104 117 108 10 




















