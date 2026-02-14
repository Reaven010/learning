import java.awt.*;
import java.awt.event.*;
class myframe{
    Frame f;
    TextField t1,t2;
    Button b;
    public myframe(){
        f=new Frame();
        t1=new TextField(20);
        t2=new TextField(20);
        f.setSize(500,500);
        f.setVisible(true);
        f.setLayout(new FlowLayout(0));
        f.add(t1);
        f.add(t2);
        b=new Button("Copy");
        f.add(b);

        b.addActionListener(new ActionListener(){
             public void actionPerformed(ActionEvent e){
                String s=t1.getText();
                t2.setText(s);
            }
        });
    }
}
public class copy_text {
    public static void main(String args[]){
        new myframe();
    }
    
}
