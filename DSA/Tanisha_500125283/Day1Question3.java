// Problem Statement: 
// Given an array of integers, write a program that calculates and returns the sum of all elements in the array. 
// Task: Calculate and return the sum of all elements in the array. 
// Examples Input:  [1, 2, 3, 4, 5] 
// Output: 15 

package DSA.Tanisha_500125283;
public class Day1Question3 {
    public static int sumOfArrays(int[] arr){
        int sum=0;
        for(int num:arr){
            sum+=num;
        }
        return sum;
    }
    public static void main(String[] args){
        int [] arr1={1, 2, 3, 4, 5 };
        int [] arr2={10, 20, 30};
        int [] arr3={7, 3, 9, 1, 6};

        System.out.println("Sum of Array 1 is :" + sumOfArrays(arr1)); 
        System.out.println("Sum of Array 2 is :" + sumOfArrays(arr2)); 
        System.out.println("Sum of Array 3 is :" + sumOfArrays(arr3)); 
    }
}