#include<iostream>
using namespace std;

void InsertionSort(int[], int);
//INPUT: -23 65 -31 76 46 89 45 32 
//Comparisons = 20   
//Shift = 13  

//INPUT: 54 65 34 76 78 97 46 32 51 21 
//Comparisons = 37
//Shift = 28 

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
        InsertionSort(a,n);  
    } 
    return 0;
}

void InsertionSort(int a[], int n)
{
    int comp=0, shift=0; 
    for(int i=1; i<n; i++)
    {
        int key = a[i];
        int j = i-1;
        comp++;
        while(a[j]>key && j>=0)
        {   
            comp++; 
            a[j+1] = a[j];
            shift++; 
            j--;
        }
        a[j+1] = key; 
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Comparisons = "<<comp<<endl;
    cout<<"Shift = "<<shift<<endl;           
}