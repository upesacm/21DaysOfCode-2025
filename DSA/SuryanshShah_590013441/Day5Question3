import java.util.*
public class Day5Question3{
    public static void main(String[] args){
    System.out.println("Enter the no. of elements in the aaray:")
    Scanner scr=new Scanner(System.in);
    int n=scr.nextInt();
    int [] array=new int[n];
    int i;
    System.out.println("Enter the elements into the array:");
    for(i=0;i<n;i++)
    {
        array[i]=scr.nextInt();
    }
    int i,j;
    boolean flag;
    for(i=0,j=n-1;i<n,j>=0;i++,j--){
        if(array[i]!=array[j]){
            flag=true;
            break;
        }
    }
    if(flag)
        System.out.println("The Array is not a Pallindrome");
    else
        System.out.println("The Array is a Pallindrome");
}
