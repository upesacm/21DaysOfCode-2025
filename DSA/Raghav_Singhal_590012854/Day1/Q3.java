public class Q3 {
    public static void main(String[] args)
    {   
       int arr[]={1,2,3,4,5};
       System.out.println("The sum is " + summ(arr));
    }
    public static int summ(int[] arr)
    {
        int sum=0;
        for(int i=0;i<arr.length;i++)
        sum+=arr[i];
        return sum;
    }
}
