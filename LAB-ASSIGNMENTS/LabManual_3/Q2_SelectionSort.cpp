#include<iostream>
using namespace std;

void SelectionSort(int [],int); 
//INPUT: -13 65 -21 76 46 32 51 21
// Comparisons = 28 
// Swaps =  7 

//INPUT: 12 22 31 42 46 54 63 65 86 223 324 325 553 645 652 
// Comparisons = 105
// Swaps =  14    
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
        {
            cin>>a[i];
        }
        SelectionSort(a,n);
    }
    return 0;
}

void SelectionSort(int a[], int n)
{
    int comp=0, swaps=0; 
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {   
            comp++;
            if(a[j]<a[min])
                min = j;
        }
        swap(a[i],a[min]); 
        swaps++;  
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Comparisons = "<<comp<<endl;
    cout<<"Swaps = "<<swaps<<endl;   
}