import java.awt.*;

class myclass extends Frame {
    Frame f;
    public myclass(){
        f=new Frame("My Frame");
        f.setSize(500,500);
        f.setVisible(true);
    }
    
}

public class framecreat_class {
    public static void main(String[] args) {
        new myclass();
    }    
}
