import java.sql.*;

class jdbcclass{
    Connection c;
    Statement s;
    jdbcclass(){
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            c=DriverManager.getConnection("jdbc:mysql://localhost:3306/trip",
                "root",
                ""
            );
            System.out.println("connection successfull");
            s=c.createStatement();
            String querry="insert into class_register (name ,age, id) values ('naman',20,32) ;";
            s.executeUpdate(querry);
        }
        catch (Exception e){
            System.out.println(e);
        };
    }

}

public class jdbc_statement {
    public static void main(String args[]){
        new jdbcclass();
    }
}
