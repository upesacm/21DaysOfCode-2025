public class Question1{ //calculate and return the sum of all even numbers in the array.
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,7,8,9,10};
        int i,sum=0;
        for(i=0;i<arr.length;i++){
            if(arr[i]%2==0){
                sum=sum+arr[i];
            }
        }
        System.out.println("Sum of Even Elements of an array:"+sum);
    }
}