#include<stdio.h>
int sumk(int arr[],int n ,int k){
int sum=0;
for(int i=0;i<n;i++){
    int checked=0;
     for (int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            checked = 1;
        }
     }
     if(checked == 1)
     {
        continue;
     }
     int count = 0;
for (int j = 0; j < n; j++) {
    if (arr[i] == arr[j]) {
        count++;
    }
}
if (count == k) {
    sum += arr[i];
}
}
return sum;
}
int main() {
    int n, k;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    int result = sumk(arr, n, k);
    printf("Sum of elements appearing  %d times is  %d\n", k, result);

    return 0;
}
