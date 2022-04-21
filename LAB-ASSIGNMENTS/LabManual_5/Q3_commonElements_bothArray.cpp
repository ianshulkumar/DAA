// Input:
// 7 
// 34 76 10 39 85 10 55
// 12
// 30 55 34 72 10 34 10 89 11 30 69 51

// Output:
// 10 10 34 55  

#include<iostream>
using namespace std; 
 
void CountSort(int a[], int n)
{
    int max = a[0]; 
        for(int i=1;i<n;i++)
        {
            if(a[i]>max)
                max = a[i];
        }
        
        int count[max+1];
        for(int i=0;i<max+1;i++)
        {
            count[i] = 0;  
        }

        for(int i=0;i<n;i++)
        {
            count[a[i]] = count[a[i]] + 1 ;
        }

        int i=0,j=0;    
        while(i<max+1)  
        {
            if(count[i]>0)
            {
                a[j] = i;
                count[i] = count[i] - 1 ; 
                j++; 
            }
            else{
                i++;  
            }
        } 

        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;   

}

int main()
{ 
    int m;
    cin>>m; 
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];  

    int n;
    cin>>n; 
    int b[n]; 
    for(int i=0;i<n;i++)
        cin>>b[i];  

    CountSort(a,m); 
    CountSort(b,n); 

    int i=0,j=0;

    while( i<m && j<n )
    {
        if(a[i]==b[j]){  
            cout<<a[i]<<" ";
            i++; j++;
        }    
        else if(a[i]<b[j])
            i++;
        else    
            j++;
    } 
     
    cout<<endl; 
    return 0; 
}