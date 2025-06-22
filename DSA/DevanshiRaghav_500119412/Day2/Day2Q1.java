public class Day2Q1 {
    public static void main(String[] args) {
        int num[] = {1,2,3,4,5};
        int sumOfeven = evenSum(num,num.length);
        System.out.println(sumOfeven);
    }
    public static int evenSum(int num[],int n){
        int sum = 0;
        for(int el : num ){
            if(el % 2 == 0){
                sum += el;
            }
        }
        return sum;
    }
}
