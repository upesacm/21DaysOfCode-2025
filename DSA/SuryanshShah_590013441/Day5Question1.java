import java.util.*
public class Day5Question1{
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
    int j,counter=0;
    for(i=0;i<n;i++)
    {
        counter=0;
        for(j=0;j<n;j++)
        {
            if(array[i]==array[j])
                counter++;
        }
        if(counter==1)
            System.out.println(array[i]+" is a Unique element");
    }
}
