public class class1 {
    public static void main(String args[]){
        Hello p= new Hello();
        Pen black=new Pen();
    p.world();
    black.setColour("black");
    black.settip(20);
    black.display();
    }
}
class Hello{
    void world(){
        System.out.println("Hello World");
    }
}
class Pen{
    String colour;
    int tip;
    void setColour(String newcolour){
        colour=newcolour;
    }
    void settip(int newtip){
        tip=newtip;
    }
    void display(){
        System.out.println(colour);
        System.out.println(tip);
    }

}