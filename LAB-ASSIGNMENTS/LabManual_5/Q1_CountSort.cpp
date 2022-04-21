// input: a e d w a d q a f p 
// output: a - 3 
#include<iostream>
using namespace std;

int main()
{ 
    int t; 
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];  
        char max = a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]>max)
                max = a[i];
        }
        
        int count[max+1];
        for(int i=65;i<max+1;i++)
        {
            count[i] = 0; 
        }

        for(int i=0;i<n;i++)
        {
            count[a[i]] = count[a[i]] + 1 ;
        }

        int maxOccur = 65;   
         
        for(int i=66;i<max+1;i++)  
        { 
            if(count[i]>count[maxOccur])      
                maxOccur = i;   
        }   
        if(count[maxOccur]>1)
            cout<<(char)maxOccur<<" - "<<count[maxOccur]<<endl;    
        else 
            cout<<"No Duplicates Found"<<endl;

    // Sorting Alphabets in accending     
    //     int i=65,j=0;    
    //     while(i<max+1)  
    //     {
    //         if(count[i]>0)
    //         {
    //             a[j] = i;
    //             count[i] = count[i] - 1 ; 
    //             j++; 
    //         }
    //         else{
    //             i++;  
    //         }
    //     }

    //     for(int i=0;i<n;i++)
    //         cout<<a[i]<<" ";
    //     cout<<endl;  
    // } 
    return 0; 
}