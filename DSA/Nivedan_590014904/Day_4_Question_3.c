#include<stdio.h>
int gibval(int arr[],int n,int val){
   int  leng=0;
   for(int i=0;i<n;i++){
    if(arr[i]==val){
        continue;
    }
    arr[leng] = arr[i];
    leng++;
   }
return leng;
}
int main(){
    int n,val;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
     int  arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the val you want to remove occurence of: \n");
    scanf("%d",&val);
    int newleng = gibval(arr,n,val);
    printf("The new length of the array is: %d",newleng);
}
