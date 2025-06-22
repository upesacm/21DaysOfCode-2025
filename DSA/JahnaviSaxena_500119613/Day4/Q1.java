public class question1 {
    public static void main(String[] args) {
        int num[]= {4, 2, 7, 1, 9};
        int min = minElement(num);
        System.out.println(min);
    }
    public static int minElement(int num[]){
        int min = Integer.MAX_VALUE;
        for(int i : num){
            if(i < min){
                min = i;
            }
        }
        return min;
    }
}
