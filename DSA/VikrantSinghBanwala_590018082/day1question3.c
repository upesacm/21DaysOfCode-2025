#include <stdio.h>
int func_sum(int n[],int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=n[i];
    }
    return sum;
}
int main(){
    int n[]={1,2,3,4,5};
    int s=sizeof(n)/sizeof(n[0]);
    int sum=func_sum(n,s);
    printf("The sum of the array elements is:%d\n",sum);
    return 0;
}