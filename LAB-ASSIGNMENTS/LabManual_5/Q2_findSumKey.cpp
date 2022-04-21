// 64 28 97 40 12 72 84 24 38 10 , key = 50 
#include<iostream>
using namespace std; 
void merge(int a[], int low, int mid, int high){ 
    int c[high];    
    int i = low;
    int j = mid+1; 
    int k = low;     
    while(i<=mid && j<=high){
        if(a[i]<a[j]){ 
            c[k] = a[i];
            k++;i++;     
        }
        else{
            c[k] = a[j]; 
            k++;j++;
        }
    }
    while(i<=mid){
        c[k] = a[i];
        k++;i++;
    }
    while(j<=high){
        c[k] = a[j];
        k++;j++; 
    }
    for(k=low;k<=high;k++)   
        a[k]=c[k];   
} 
void mergeSort(int a[], int low, int high){ 
    if(low<high){
        int mid = (low+high)/2; 
        mergeSort(a,low,mid);   
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high); 
    }
} 
int main()
{ 
    int t; 
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];  
        int key;
        cin>>key;
        mergeSort(a,0,n-1);
        
        int i=0,j=n-1; 
        while(i<j)  
        {
            if(a[i]+a[j]==key){
                cout<<a[i]<<" "<<a[j]<<endl; 
                break;
            }
            else if(a[i]+a[j]>key){
                j--; 
            }
            else{
                i++; 
            }
        } 
        if(i>=j) 
            cout<<"No Such Element Exists"<<endl; 
    } 
    return 0; 
}