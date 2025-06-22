public class Q1 
{
    public static void main(String[] args) 
    {
        int num[]={-3, -1, -5, -2};
        System.out.println(mini(num));
    }
    public static int mini(int num[])
    {
        int min = num[0];
        for(int i : num)
            if(i < min)
                min = i;
        return min;
    }
}
