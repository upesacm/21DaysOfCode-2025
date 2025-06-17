#include<stdio.h>


void question_1(int [],int);
void question_2(int [],int );
void question_3(int [],int );




int main()
{
    int arr[6] = {2,-11,6,-4,1,-2}; 

    int length = sizeof(arr)/sizeof(arr[0]);

    
    
    question_1(arr,length);


    return 0;
}



// Qusetion 1
void question_1(int arr[],int length){
    
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
    
    printf("Updated array: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}
