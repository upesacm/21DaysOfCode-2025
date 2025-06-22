public class Day1Question2 {
    public static void main(String[] args) {
        int[] universal = {1, 2, 3, 4, 5};
        int[] arr = {1, 3,2 , 2, 3};
        int i,j;
        for(i=0;i<universal.length;i++){
            int count=0;
            for (j=0;j<arr.length;j++){
                if(universal[i]== arr[j]) {
                    count++;
                }
            }
            if(count==0)
                System.out.println("missing:"+universal[i]);
            else if(count==2)
                System.out.println("Twice:"+universal[i]);

        }
    }
}
