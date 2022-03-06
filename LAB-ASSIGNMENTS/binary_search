#include<iostream>
using namespace std;

void iterative_binary_search(int a[],int key,int length){
    int i,mid,l=0,h=length-1; 
    for(i=0;l<=h;i++){ 
        mid = (l+h)/2;
        if(a[mid]==key){  
            cout<<"Present "<<i+1<<endl;   
            return;
        } 
        if(a[mid]>key){ 
            h = mid-1; 
        }
        else{
            l = mid+1;
        }
    }
    cout<<"Not Present "<<i<<endl;
}
int recursive_binary_search(int a[],int key,int l,int h){
    int mid;
    static int comp=0;
        if(l<=h){
            mid = (l+h)/2;
            comp++;
            if(a[mid]==key){  
                cout<<"Present "<<comp<<endl;   
                return 1;
            } 
            if(a[mid]>key){ 
                return recursive_binary_search(a,key,l,mid-1); 
            }
            else{
                return recursive_binary_search(a,key,mid+1,h); 
            }
        }  
        cout<<"Not Present "<<comp<<endl;          
        return 0;
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
           cin>>a[i];
        }
        int key;
        cin>>key;
        int l=0,h=n-1;
        recursive_binary_search(a,key,l,h);
    }
    return 0;
}

// test cases:
// 1 5 12 23 36 39 41 41 
// 1 8 21 39 40 45 51 54 68 72 69 
// 1 10 101 246 438 561 796 896 899 4644 7999 8545 7999
