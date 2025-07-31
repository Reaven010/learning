public class copy_constructor {
    public static void main(String args[]){
        Student a=new Student();
        Student b=new Student(a);
        a.rollno=10;
        System.out.println(b.rollno);
    }
}
class Student{
    String name;
    int rollno;


    // copy
    Student(Student s1){
        this.name=s1.name;
        this.rollno=s1.rollno;

    }


    Student(){
        this.name="sayujya";
        this.rollno=123;
    }
}
