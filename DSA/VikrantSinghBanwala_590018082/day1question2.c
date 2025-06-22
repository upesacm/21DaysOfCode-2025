#include<stdio.h>
void missme(int n[],int s,int *m,int *d){
    int count[s+1];
    for(int i=0;i<=s;i++){
        count[i]=0;
    }
    for(int i=0;i<s;i++) {
        count[n[i]]++;
    }
    for(int i=1;i<=s;i++){
        if(count[i]==0){
            *m=i;
        }
        if(count[i]==2){
            *d=i;
        }
    }
}
int main(){
    int n1[] = {3,1,3};
    int s1=sizeof(n1)/sizeof(n1[0]);
    int m1,d1;
    missme(n1,s1,&m1,&d1);
    printf("Input:[3,1,3]->Missing:%d,Twice:%d\n",m1,d1);
    int n2[]={4,3,6,2,1,1};
    int s2=sizeof(n2)/sizeof(n2[0]);
    int m2,d2;
    missme(n2,s2,&m2,&d2);
    printf("Input:[4,3,6,2,1,1]->Missing:%d,Twice:%d\n",m2,d2);
    return 0;
}