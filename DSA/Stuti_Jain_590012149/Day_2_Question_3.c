#include<stdio.h>
#include<stdlib.h>
int n1,n2,i,j;
int main(){
printf("Enter the number of elements in the first and second array:\n");
scanf("%d %d",&n1,&n2);

int arr[n1],arr2[n2];

printf("Enter the elements in the first array:\n");
for(i=0;i<n1;i++){
scanf("%d",&arr[i]);
}

  printf("Enter the elements in the second array:\n");
for(j=0;j<n2;j++){
      scanf("%d",&arr2[j]);
}

    if(n1!=n2){
  printf("false\n");
   exit(0);
}

int checked[n1];
for(i=0;i<n1;i++){
checked[i]=0;
}

for(i=0;i<n1;i++){
    if(checked[i]==1) continue;

int c1=1,c2=0;

  for(j=i+1;j<n1;j++){
if(arr[j]==arr[i]){
    c1++;
     checked[j]=1;
}
  }

    for(j=0;j<n2;j++){
 if(arr2[j]==arr[i]){
c2++;
}
}

if(c1!=c2){
   printf("false\n");
exit(0);
}
}

  printf("true\n");
return 0;
}
