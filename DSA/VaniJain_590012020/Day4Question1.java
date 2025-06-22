import java.util.*;
public class Minimum
{
    public static void main(String[] args)
{
    int n,i,max;
    System.out.println("Enter the no. of elements in the aaray:");
    Scanner scr=new Scanner(System.in);
    n=scr.nextInt();
    int [] arr=new int[n];
    System.out.println("Enter the elements into the array:");
    for(i=0;i<n;i++)
    {
        arr[i]=scr.nextInt();
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    System.out.println("The maximun element of the array is "+max);
}
}
