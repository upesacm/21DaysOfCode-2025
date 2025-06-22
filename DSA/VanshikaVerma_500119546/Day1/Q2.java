

public class d1q2 {
    public static void main(String[] args) {
        int[] arr = { 3, 1, 3};
        int[] ans = find(arr);
            System.out.println("Missing: " + ans[0]);
            System.out.println("Twice: "+ ans[1]);
    }
     public static int[] find (int[] arr){
        int i = 0;
        while(i< arr.length) {
            int cor = arr[i]-1;
            if(arr[i] != arr[cor]){
                int temp =arr[i];
                arr[i]= arr[cor];
                arr[cor] = temp;
            }
            else 
            i++;
        }
        int j ;
        for( j = 0;j< arr.length;j++){
          if(arr[j] != j+1){
            break;
          }
        }
        return new int[]{(j+1), arr[j]};
    }
}
