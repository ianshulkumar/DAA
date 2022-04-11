//code by anshulkumar
#include<iostream>
using namespace std; 
int countDuplicates(int a[],int key, int l ,int h,int isFirst){
    int mid;
    int result = -1; 
    while(l<=h){
        mid = (l+h)/2;  
        if(a[mid]==key){
            result = mid; 
            if(isFirst==1)
                h = mid-1;
            else if(isFirst==0)
                l = mid+1;   
        }     
        else if(a[mid]>key) 
            h = mid-1;
        else
            l = mid+1; 
    }
    return result;
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
        int key;
        cin>>key; 
        int leftIndex = countDuplicates(a,key,0,n-1,1); 
        if(leftIndex == -1){ 
            cout<<"Not Found";   
            return 0;    
        }    
        int rightIndex = countDuplicates(a,key,0,n-1,0);  
        int count = rightIndex - leftIndex + 1 ;    
        cout<<key<<" - "<<count;   
    }
    return 0; 
}