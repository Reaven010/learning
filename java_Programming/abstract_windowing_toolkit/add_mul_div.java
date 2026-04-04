import java.awt.*;
import java.awt.event.*;

class my_frame{
    Frame f;
    TextField t1,t2,t3;
    Button b1,b2,b3;
    my_frame(){
        f=new Frame("main page");
        f.setLayout(new FlowLayout());
        f.setSize(500,500);
        t1=new TextField(20);
        t2=new TextField(20);
        t3=new TextField(20);
        b1=new Button("add");
        b2=new Button("mul");
        b3=new Button("div");
        f.add(t1);
        f.add(t2);
        f.add(t3);
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.setVisible(true);
        f.addWindowListener(new WindowListener(){
            public void windowClosing(WindowEvent e){
                System.exit(0);
            }
            public void windowOpened(WindowEvent e){}
            public void windowActivated(WindowEvent e){}
            public void windowClosed(WindowEvent e){}
            public void windowDeiconified(WindowEvent e){}
            public void windowIconified(WindowEvent e){}
            public void windowDeactivated(WindowEvent e){}

        });
        b1.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                String a=t1.getText().trim();
                String b=t2.getText().trim();
                int c=Integer.parseInt(a) + Integer.parseInt(b);
                t3.setText("sum of "+a+" and "+b+" is "+c);
            }
        });

        b2.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                String a=t1.getText().trim();
                String b=t2.getText().trim();
                int c=Integer.parseInt(a)*Integer.parseInt(b);
                t3.setText("Multiplication of "+  a+ "  and "+b+" is "+c);
            }
        });

        b3.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                String a=t1.getText().trim();
                String b=t2.getText().trim();
                int c=Integer.parseInt(a)/Integer.parseInt(b);
                t3.setText("division of "+  a+ "  and "+b+" is "+c);
            }
        });
    }
    
}


public class add_mul_div{
    public static void main(String args[]){
        new my_frame();
    }
}