import java.util.*;
public class Remove
{
    public static void main(String[] args)
    {
        System.out.println("Enter the no. of elements in the aaray:");
        Scanner scr=new Scanner(System.in);
        int n=scr.nextInt();
        int [] array=new int[n];
        int i;
        System.out.println("Enter the elements into the array:");
        for(i=0;i<n;i++)
        {
            array[i]=scr.nextInt();
        }
        System.out.println("Enter the value to be removed:");
        int value=scr.nextInt();
        int count=0;
        for(i=0;i<array.length;i++)
        {
            if(array[i]!=value)
            {
                count++;
            }
        }
        System.out.println("The total no. of elements in the array after removing "+value+" are "+count);
}
}
