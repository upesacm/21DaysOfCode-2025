public class Day_1_Question_3 {
    public static void main(String[] args) {
        int num[] = {1, 2, 3, 4, 5};
        System.out.println(sumOfarray(num,num.length));
    }
    public static int sumOfarray(int num[],int n){
        int sum =0 ;
        for(int i = 0 ;i < num.length ; i++){
            sum += num[i];
        }
        return sum;
    }
}

