public class Q1
{
    public static void main(String args[])
    {
        int arr[]={1, 2, 3, 4, 5};
        System.out.println(SumOfEven(arr));
    }
    public static int SumOfEven(int[]arr)
    {
        int sum=0;
        for(int i=0;i<arr.length;i++)
        if(arr[i]%2==0)
        sum+=arr[i];
        return sum;
    }
}