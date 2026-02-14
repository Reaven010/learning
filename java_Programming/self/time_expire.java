public class time_expire {
    public static void main(String args[]){
        long time=Long.MAX_VALUE;
        long year=(1000L*60*60*24*365)+(6*60*60*1000L);
        long sec=((long)(time/1000))%60;
        long minutes=((long)(time/60)))%60;
        long exp_year=1970+((long)(time/year));
        System.out.println(exp_year);
    }
}
