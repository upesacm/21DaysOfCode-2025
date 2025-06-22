#include<stdio.h>
void replace(int n[], int s){
    for(int i=0;i<s;i++){
        if(n[i]<0){
            n[i]=0;
        }
    }
}
int main(){
    int n[]= {-1,2,-3,4,5};
    int s = sizeof(n)/sizeof(n[0]);
    replace(n,s);
    printf("Modified array: [");
    for(int i=0;i<s;i++){
        printf("%d",n[i]);
        if(i<s-1) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}