#include <stdio.h>

int arr[100];
int k;
int result = 0;
int size;
int main(){
    printf("Enter the number of elements (Should be less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the frequency : ");
    scanf("%d", &k);
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int i = 0;
    while(i < size){
        int freq = 1;
        while((i + freq < size) && (arr[i] == arr[i+freq])){
            freq++;
        }
        if(freq == k){
            result += arr[i];
        }
        i+= freq;
    }

    printf("Result : %d", result);
}
