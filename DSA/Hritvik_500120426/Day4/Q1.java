class Q1{
  public static void main(String[] args){

    int[] arr={4,2,7,1,9};
    int min = Integer.MAX_VALUE;

  for (int i : arr){
    if(i < min){
      min=i;
    }
  }
  System.out.println("The minimum value is "+ min);
  }
}
