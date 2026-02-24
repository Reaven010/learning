import java.awt.*;
import java.awt.event.*;


class gui{
    gui(){
       Frame f=new Frame();
        f.setSize(500,500);
        f.setLayout(new FlowLayout());
        f.setLocation(500,500);
        f.setVisible(true);
        Label l1=new Label("enter your name");
        f.add(l1);
        TextField tf = new TextField(20);
        f.add(tf);
        Checkbox c1=new Checkbox("java");
        f.add(c1);
        Checkbox c2=new Checkbox("Python");
        f.add(c2);
        Checkbox c3=new Checkbox("C++");
        f.add(c3);
        Label l2=new Label("select language from list");
        f.add(l2);
        List l=new List();
        l.add("Java");
        l.add("Python");
        l.add("C++");
        l.add("JavaScript");
        f.add(l);
        Button b=new Button("Submit");
        f.add(b);
        Label l3=new Label();
        f.add(l3);
        b.addActionListener(new ActionListener() {
           public void actionPerformed(ActionEvent e){
            l3.setText("submitted");
           } 
        });

        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                // TODO Auto-generated method stub
                System.exit(0);
            }
        }); 
    }
}


public class gui_with_list {
    public static void main(String args[]){
        new gui();
    }
}
