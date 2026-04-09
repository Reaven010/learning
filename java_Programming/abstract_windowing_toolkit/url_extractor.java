import java.net.*;


public class url_extractor {
    public static void main(String args[]){
        try{
            URL url=new URL("https://club-pi-roan.vercel.app/");
            System.out.println("Protocol :"+url.getProtocol());
            System.out.println("Host:"+url.getHost());
            System.out.println("port : "+url.getPort());
            System.out.println("path : "+url.getPath());
            System.out.println("Query : "+url.getQuery());
        }catch(Exception e){
            System.out.println(e);
        }
    }    
}
