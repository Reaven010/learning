import java.awt.*;
import java.awt.event.*;


class loginpage {
    Frame f;
    TextField t1;
    TextField t2;
    Button b;
    Label l1,l2;
    String user[],pass[];
    loginpage(){
        user=new String[]{"12","13","14","32"};
        pass=new String[]{"21","31","41","23"};
        


        f=new Frame("Login");
        f.setSize(500,500);
        f.setLayout(new FlowLayout());
        f.setVisible(true);
        l1=new Label("Username");
        t1=new TextField(20);
        f.add(l1);
        f.add(t1);
        l2=new Label("password");
        f.add(l2);
        t2=new TextField(20);
        f.add(t2);
        b=new Button("Login");
        b.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                for(int i=0;i<user.length;i++){
                    if(user[i].equals(t1.getText()) && pass[i].equals(t2.getText())){
                        System.out.println("login successfull");
                        return;
                    }
                }
                System.out.println("no match found");
                return;
            }
            
            
        });
        f.add(b);
    }
}

public class login {
    public static void main(String args[]){
        new loginpage();
    }
}
