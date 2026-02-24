import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;
class frame{
    frame(){
        Frame f=new Frame("Java DataBase Connectivity");
        f.setLayout(new FlowLayout());
        f.setSize(500,500);
        f.setLocation(300,300);
        f.setVisible(true);
        Label l1=new Label("Id"),l2=new Label("Name"),l3=new Label("Age");
        TextField t1=new TextField(20),t2=new TextField(20),t3=new TextField(20);
        Button b1=new Button("Insert"),b2=new Button("Update"),b3=new Button("Delete");
        f.add(l1);
        f.add(t1);
        f.add(l2);
        f.add(t2);
        f.add(l3);
        f.add(t3);
        f.add(b1);
        f.add(b2);
        f.add(b3);
        //window control added
        f.addWindowListener(new WindowListener() {
            @Override
            public void windowClosing(WindowEvent e) {
                // TODO Auto-generated method stub
                System.out.println("closing program");
                System.exit(0); 
            }
            @Override
            public void windowActivated(WindowEvent e) {}
            @Override
            public void windowDeactivated(WindowEvent e){}
            @Override
            public void windowClosed(WindowEvent e) {}
            @Override
            public void windowDeiconified(WindowEvent e) {}
            @Override
            public void windowIconified(WindowEvent e) {}
            @Override
            public void windowOpened(WindowEvent e) {}

        });


        //adding button controls

        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e ){
                System.out.println("insert clicked");
            }
        });

        b2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e ){
                System.out.println("Update clicked");
            }
        });

        b3.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e ){
                System.out.println("delete clicked");
            }
        });

    }
}

public class jdbc_with_ui {
    public static void main(String args[]){
        new frame();
    }
}
