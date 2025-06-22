#include <stdio.h>

int main() {
    int arr[5];
    int i;
    
    printf("Enter 5 elements:\n");
    for(i=0; i<5; i++){
     scanf("%d", &arr[i]);
    }

for(i=0; i<5; i++){
    if (arr[i]<0){
    arr[i]=0;
    }
}

printf("Array:\n");
for(i=0; i<5; i++){
    printf("%d ", arr[i]);
}

return 0;
}