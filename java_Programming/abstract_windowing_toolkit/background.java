import java.awt.*;
import java.awt.event.*;


class frame  {
    Frame f ;
    frame(){
        f=new Frame("color changing");
        f.setSize(500,500);
        f.addMouseListener(new MouseListener() {
            public void mouseClicked(MouseEvent e){
                f.setBackground(Color.red);
                System.out.println("mouse clicked");
            }
            public void mousePressed(MouseEvent e){
                f.setBackground(Color.GREEN);
                System.out.println("mouse holded");
            }
            public void mouseReleased(MouseEvent e){
                Color c =new Color(0xE5D0FF);
                f.setBackground(c);
                System.out.println("mouse released");
            }
            public void mouseEntered(MouseEvent e){
                f.setBackground(Color.ORANGE);
                System.out.println("mouse entered");
            }
            public void mouseExited(MouseEvent e){
                f.setBackground(Color.GRAY);
                System.out.println("mouse exited");
            }
        });
        f.setVisible(true);
    }
}

public class background {
    public static void main(String args[]){
        new frame();
    }
}
