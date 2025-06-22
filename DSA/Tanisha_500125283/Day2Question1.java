// Problem Statement: Given an array of integers nums of size n, calculate and return the sum of all even numbers in the array. 
// Task: Calculate and return the sum of all even numbers in the array. 
// Examples Input: nums = [1, 2, 3, 4, 5] 
// Output: 6

package DSA.Tanisha_500125283;

public class Day2Question1 {
    public static int Sum_of_even(int[] numbers){
        int evenNumbersSum=0;
        for(int num:numbers){
            if(num%2==0){
                evenNumbersSum+=num;
            }
        }
        return evenNumbersSum;
    }

    public static void main (String[] args){
        int[] numbers={1,2,3,4,5};
        int result=Sum_of_even(numbers);
        System.out.println("Sum of even numbers is : " + result);

    }    
}
