//INPUT: 23 65 21 76 46 89 45 32
//OUTPUT: Comparisons: 16 , Inversions: 13  
#include<iostream>  
using namespace std; 
int comp=0;    
 
int merge(int a[], int l, int mid, int r){  
    int countInversions = 0;    
    int c[r];    
    int i = l;
    int j = mid; 
    int k = l;   
    while(i<mid && j<=r){
        if(a[i]<a[j]){ 
            c[k++] = a[i++];
        }
        else{
            c[k++] = a[j++];  
            countInversions = countInversions + (mid-i); 
        }
        comp++; 
    }
    while(i<mid){
        c[k++] = a[i++];
    }
    while(j<=r){
        c[k++] = a[j++];
    }
    for(k=l;k<=r;k++)    
        a[k]=c[k];   
    return countInversions; 
} 
 
int mergeSort(int a[], int l, int r){ 
    int inversions=0; 
    if(l<r){ 
        int mid = (l+r)/2; 
        inversions = mergeSort(a,l,mid);    
        inversions += mergeSort(a,mid+1,r);  
        inversions += merge(a,l,mid+1,r);  
    }
    return inversions;  
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
        int inversions = mergeSort(a,0,n-1); 
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl; 
        cout<<"Comparisons = "<<comp<<endl; 
        cout<<"Inversions = "<<inversions<<endl; 
    }
    return 0; 
}
