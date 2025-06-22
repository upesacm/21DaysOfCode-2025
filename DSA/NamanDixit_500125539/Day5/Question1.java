import java.util.Scanner;

class Question1 {

    public static void findUnique(int nums[]){

        for(int i=0; i<nums.length;i++){
            boolean isUnique=false;
            for(int j=0; j<i;j++){
                if(nums[i]!=nums[j]){
                    isUnique=true;
                    break;
                }
            }
            if(isUnique){
                System.out.println(nums[i]+" ");
            }
        }

    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        //Enter array lenght
        System.out.println("Enter length of array: ");
        int n = sc.nextInt();
        int nums[] = new int[n];
        //Enter elements of the array

        System.out.println("Enter array elements: ");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        findUnique(nums);

        sc.close(); // Always good to close the scanner
    }
}
