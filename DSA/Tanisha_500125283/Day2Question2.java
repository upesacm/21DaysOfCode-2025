// Problem Statement: Given an array nums of size n, return the first element and the last element of the array as a pair. 
// Task: Return the first and last elements of the array. 
// Examples Input: nums = [1, 2, 3, 4] 
// Output: First: 1, Last: 4

package DSA.Tanisha_500125283;

public class Day2Question2 {
    public static void firstAndLastElement(int[] num){
        if(num==null || num.length==0){
            System.out.println("Array is empty");
        }
        int first_element=num[0];
        int last_element=num[num.length-1];
        System.out.println("First: "+ first_element+", Last: "+last_element);

    }
    public static void main(String[] args){
        int[] num={1,2,3,4};
        firstAndLastElement(num);
    }
}
