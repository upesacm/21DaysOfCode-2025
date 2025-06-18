import java.util.Scanner;

class Question2 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        //Enter array length
        int n = sc.nextInt();
        int nums[] = new int[n];
        
        //Enter elements of the array
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

         int first=0;
         int last=0;
            first = nums[0];
            last= nums[n-1];
            System.out.println("First: "+first+", Last= "+last);
    
        }
    }
