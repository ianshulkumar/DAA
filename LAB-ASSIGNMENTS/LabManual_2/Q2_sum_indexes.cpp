//code by anshulkumar 
#include<iostream>
using namespace std; 
int Search(int a[],int n,int key){ 
    int l=0,h=n-1;
    int mid; 
    while(l<=h){
        mid = (l+h)/2; 
        if(a[mid]==key) 
            return mid;
        else if(a[mid]<key) 
            l = mid+1;
        else  
            h = mid-1;
    }
    return -1;
} 

void findIndices(int a[],int n){
    for(int i=0;i<n-1;i++){  
        for(int j=i+1;j<n;j++){  
            int sum = a[i] + a[j]; 
            int k = Search(a,n,sum);      
            if(k!=-1){ 
                cout<<i<<","<<j<<","<<k<<endl; 
                return;  
            } 
        }
    } 
    cout<<"No sequence found"<<endl;
    return; 
}

int main(){ 
    int t; 
    cin>>t;
    while(t--){ 
        int n;
        cin>>n; 
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        findIndices(a,n);    
    }
    return 0;
} 


// 24 28 48 71 86 89 92 120 194 201
// 1 5 84 209 341