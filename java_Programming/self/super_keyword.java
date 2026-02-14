public class super_keyword {
    public static void main(String args[]){
        mark o1=new mark(1,"Sayujya Tiwari",90);
        o1.display();
        
    }
}

class personal{
    public int rollno;
    public String name;
    personal(int n,String a){
        this.name=a;
        this.rollno=n;
    }
}

class mark extends personal{
    public int physics;
    mark(int n,String a,int m){
        super(n,a);
        this.physics=m;
    }

    void display(){
        System.out.println("name : "+name);
        System.out.println("rollno : "+rollno);
        System.out.println("physics : "+physics);
    }

}