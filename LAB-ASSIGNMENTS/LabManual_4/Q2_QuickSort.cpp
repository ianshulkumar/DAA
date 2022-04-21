#include<iostream>
using namespace std;
int partition(int a[],int low,int high, int & comp, int & swaps){
    int pivot = a[low];
    int i = low+1;
    int j = high;
    do{ 
        while(a[i]<=pivot){ 
            comp++;
            i++;
        }
        while(a[j]>pivot){  
            comp++;  
            j--;
        } 
        if(i<j){  
            swap(a[i],a[j]);
            swaps++; 
        } 
    }while(i<j); 
    swap(a[low],a[j]);   
    swaps++; 
    return j;   
} 

void quickSort(int a[],int low,int high,int & comp, int & swaps){
    if(low<high){ 
        int partitionIndex = partition(a,low,high,comp,swaps);
        quickSort(a,low,partitionIndex-1,comp,swaps);  
        quickSort(a,partitionIndex+1,high,comp,swaps); 
    }    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int comp = 0,swaps = 0;      
        quickSort(a,0,n-1,comp,swaps); 
        for(int i=0;i<n;i++) 
            cout<<a[i]<<" ";
        cout<<endl;   
        cout<<"Comparisons = "<<comp<<endl; 
        cout<<"Swaps = "<<swaps<<endl; 
    }
    return 0;
}