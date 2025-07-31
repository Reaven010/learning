import java.util.*;
public class constructor {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter student name");
        String name=sc.nextLine();
        System.out.println("enter roll no.");
        int rollno=sc.nextInt();
        Student one=new Student (name,rollno);
        one.display();
        sc.close();
    }
}
class Student {
    String name;
    int rollno;
    Student(String name ,int rollno){
        this.name=name;
        this.rollno=rollno;
        System.out.println("constructor is called");
    }
    void display(){
        System.out.println("Name of Student "+this.name );
        System.out.println("rollno. of student "+this.rollno);
    }
}
