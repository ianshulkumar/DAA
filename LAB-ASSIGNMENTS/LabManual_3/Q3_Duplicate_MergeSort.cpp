//Input: 28 52 83 14 75 
//Output: NO   
//Input: 75 65 1 65 2 6 86 2 75 8 
//Output:  YES   
#include<iostream>
using namespace std;
 
void mergeSort (int a[], int l, int r);  
void merge(int a[], int l, int mid, int r); 
 
void findDuplicate(int a[], int n)  
 {
    bool flag = false; 
    for(int i=0;i<n-1;i++)
    {
        int prev = a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==prev)
            {
                flag = true;
                break;
            }
            prev = a[j];
        }
        if(flag)
        { 
            cout<<"YES"<<endl;
            break;
        }
    } 
    if(!flag)
        cout<<"NO"<<endl;
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
        mergeSort(a,0,n-1);  
        findDuplicate(a,n); 
    }
    return 0;
}

void mergeSort(int a[], int l, int r){ 
    if(l<r){  
        int mid = (l+r)/2;  
        mergeSort(a,l,mid);   
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r); 
    }
}

void merge(int a[], int l, int mid, int r){ 
    int c[r];     
    int i = l, j = mid+1, k = l;   
    while(i<=mid && j<=r){
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
    while(j<=r){
        c[k] = a[j];
        k++;j++; 
    }
    for(k=l;k<=r;k++)   
        a[k]=c[k];   
}