public class palindrome{
    public static int power(int n,int p){
        if (p==0)
        return 1;
        int temp=1;
        for (int i=0;i<p;i++){
            temp*=n;
        }
        return temp;
    }
    public static int reverse(int num){
        int rev=0;
        int count=(int)Math.log10(num);
        System.out.println(count);
        while(num!=0){
            rev +=(num%10)*power(10,count);
            num/=10;
            count--;
        }
        return rev;
    }
    public static void main(String args[]){
        int num=121;
        if (num==(reverse(num))){
            System.out.println("given string is palindrome");
        }
        else{
            System.out.println("Not A palindrome");
        }
    }

}