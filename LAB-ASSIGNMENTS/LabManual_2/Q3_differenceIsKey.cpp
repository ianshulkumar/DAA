//code by anshulkumar 
#include<iostream>
using namespace std; 
void sort(int a[],int n);
//  Input: size=5   Element= 1 51 84 21 31  key=20
// Output: 2   
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
        sort(a,n);  
        int pair=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){ 
                if(a[j]-a[i]==key)
                    pair++; 
            }  
        } 
        cout<<pair<<endl; 
    }
    return 0;
}

void sort(int a[],int n){
    for(int i=0;i<n-1;i++){  
        for(int j=0;j<(n-1)-i;j++){ 
            if(a[j]>a[j+1]){   
                swap(a[j],a[j+1]);  
            }
        }
    } 
    return; 
} 