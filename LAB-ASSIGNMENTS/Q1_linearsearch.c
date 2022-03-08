// Problem I. Given an array of nonnegative integers, design a linear algorithm and implement it using a
// program to find whether given key element is present in the array or not. Also, find total number
// of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)

#include<stdio.h>
int linearsearch(int arr[],int n,int key){
  int i;
  for(i=0;i<n;i++){
    if(key==arr[i]){
        printf("Present %d",i+1);
        return 1;
    }
  }
  printf("Not Present %d",i);
  return 0;
}
int main(){
  int t,i,n,key;

  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    linearsearch(a,n,key);
  }
  return 0;
}
