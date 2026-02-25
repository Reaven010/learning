import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.sql.*;
class frame{
    Connection connection;
    Statement statement;
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
        try {
    Class.forName("com.mysql.cj.jdbc.Driver");

    connection = DriverManager.getConnection(
            "jdbc:mysql://localhost:3306/trip",
            "root",
            ""
    );

    statement = connection.createStatement();

    System.out.println("DATABASE CONNECTED SUCCESSFULLY");

} catch (Exception e) {
    System.out.println("DATABASE CONNECTION FAILED");
    e.printStackTrace();
}
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
                try{
                String id=t1.getText(); 
                String name=t2.getText();
                String age=t3.getText();
                System.out.println("insert clicked");
                String querry="insert into class_register (name,age,id) values("+"'"+ name +"'," + age + "," + id + " );";
                System.out.println(querry);
                statement.executeUpdate(querry);
                }
                catch(Exception a){
                    a.printStackTrace();};
            }
        });

        b2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e ){
                try{
                    System.out.println("Update clicked");
                    String id=t1.getText(); 
                    String name=t2.getText();
                    String age=t3.getText();
                    String querry="update class_register set name='"+ name +"',age="+age+" where id="+id+";";
                    System.out.println(querry);
                    statement.executeUpdate(querry);
                }
                catch(Exception a){
                    System.out.println("connection failed");
                }
            }
        });

        b3.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e ){
                try{
                    System.out.println("Update clicked");
                    String id=t1.getText(); 
                    String name=t2.getText();
                    String age=t3.getText();
                    System.out.println("delete clicked");
                    String querry="delete from class_register where id="+id+";";
                    System.out.println(querry);
                    statement.executeUpdate(querry);
                }
                catch(Exception a){
                    System.out.println("connection failed");
                }
            }
        });

    }
}

public class jdbc_with_ui {
    public static void main(String args[]){
        new frame();
    }
}
