import java.util.Scanner;

class Question1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        //Enter array lenght
        int n = sc.nextInt();
        int nums[] = new int[n];
        //Enter elements of the array
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

         //Sum of even elements
         int sum=0;
        for(int i=0; i<nums.length;i++){
            if(nums[i]%2==0){
                sum+=nums[i];
            }
        }
            System.out.println("Sum = "+sum);
        sc.close(); // Always good to close the scanner
    }
}
