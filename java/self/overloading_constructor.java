public class overloading_constructor {
    public static void main(String args[]){
        Student a=new Student();
        Student b=new Student("Sayujya");
        Student c=new Student(123);
    }
}


class Student{
    int rollno;
    String name;
    Student(){
        System.out.println("default constructor is called");
    }
    Student(String name ){
        this.name=name;
        System.out.println("name set");
    }
    Student(int rollno){
        this.rollno=rollno;
        System.out.println("rollno set");
    }
}