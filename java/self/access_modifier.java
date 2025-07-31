public class access_modifier {
    public static void main(String args[]){
        Bank_account sayujya =new Bank_account();
        sayujya.username="reaven";
        // sayujya.password="asdfghjkl";
        sayujya.setpassword("asdfghjkl");
        sayujya.display();
    }
}
class Bank_account{
    public String username;
    private String password;
    public void setpassword(String s){
        password=s;
    }
    public void display(){
        System.out.println(username);
        System.out.println(password);
    }
}
