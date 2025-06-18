#include<stdio.h>


void question_1(int [],int);
void question_2(int [],int );
void question_3(int [],int );




int main()
{

    int arr[6] = {2,5,6,3,1,2}; // Arrat for question 2



    int length = sizeof(arr)/sizeof(arr[0]);

    

    question_2(arr,length);

    
    
    
    return 0;
}




// Question 2
void question_2(int arr[],int length){
    
    int count = 0;
    int missing_number, occur_twice;

    for (int i = 1; i < length; i++)
    {
        count = 0;
        for (int j = 0; j < length; j++)
        {
            if (i == arr[j])
            {
                count++;
                
            }
        }
        
        if (count == 0)
        {
            missing_number = i;
        }
        else if (count == 2)
        {
            occur_twice = i;
        }
    }
    
    printf("Missing: %d, Twice: %d",missing_number,occur_twice);
}

