#include <stdio.h>

int main() {
    int arr[5];
    int i, j, d=0;

printf("Enter 5 elements:\n");
for(i=0; i<5; i++) {
    scanf("%d", &arr[i]);
}

for(i=0; i<5; i++) {
    for(j=i+1; j<5; j++) {
        if(arr[i] == arr[j]) {
        d=1;
        break;
        }
    }
if(d) {
break;
}
}

if(d) {
    printf("True\n");
} 
else {
    printf("False\n");
}

return 0;
}
