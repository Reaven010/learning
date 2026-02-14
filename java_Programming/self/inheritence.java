public class inheritence{
    public static void main(String args[]){
        child c=new child();
        c.helloChiild();
        c.hello();
    }
}

class parent{
    public void hello(){
        System.out.println("hello from parent class");
    }
};
class child extends parent{
    public void helloChiild(){
        System.out.println("hello from child class");
    }
};
