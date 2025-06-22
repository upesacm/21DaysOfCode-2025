#include<stdio.h>


void question_1(int [],int);
void question_2(int [],int );
void question_3(int [],int );




int main()
{
    int arr[6] = {2,-11,6,-4,1,-2}; 

    int length = sizeof(arr)/sizeof(arr[0]);

    question_3(arr,length);
    
    
    
    
    return 0;
}





// Question 3
void question_3(int arr[],int length){
    int sum = 0;
    
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    
    printf("%d",sum);
}