#include <stdio.h>

int size;
int arr[100];
int max_size = 0;
int start_index = 0;
int end_index = 0;
int current_size = 0;

int main(){
    printf("Enter the number of elements (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int i = 0;
    for(i = 1; i < size; i++){
        if(arr[i] - arr[i-1] == 1){
            current_size += 1;
        }
        else if(current_size >= max_size){
            start_index = end_index;
            end_index = i;
            max_size = current_size;
            current_size = 0;
        }
    }
    if(current_size >= max_size){
        start_index = end_index;
        end_index = i;
        if(end_index == size - 1){
            end_index += 1;
        }
        max_size = current_size;
        current_size = 0;
    }
    printf("Max Element of the subarray : %d\n", max_size + 1);
    printf("Subarray : {");
    for(int i = start_index; i < end_index; i++){
        printf("%d, ", arr[i]);
    }
    printf("}");
}
