import java.util.Scanner;

class Question2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        //Enter array lenght
        System.out.println("Enter array length: ");
        int n = sc.nextInt();
        int nums[] = new int[n];

        //Enter array elements
        System.out.println("Enter array elements: ");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        // Check for duplicates
        boolean duplicate = false;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) {
                break;
            }
        }

        // Print result
        if (duplicate) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
        
        
        sc.close(); // Always good to close the scanner

        }

    }
