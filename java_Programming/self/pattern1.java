public class pattern1 {
    public static void main(String args[]){
        int n=5;
        //upper triangle
        System.out.println("upper triangle");
        for (int i=1;i<=n;i++){
            for (int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        //inverted triangle
        System.out.println("inverted triangle");
        for (int i=0;i<n;i++){
            for (int j=0;j<n-i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        System.out.println("half pyramid");
        for (int i=0;i<n;i++){
            for (int j=1;j<=n-i;j++){
                System.out.print(j);
            }
            System.out.println();
        }

        System.out.println("character upper triangle");
        for (int i=1;i<=n;i++){
            for (int j=0;j<i;j++){
                char ch='a';
                System.out.print(ch);
                ch++;
            }
            System.out.println();
        }

    }
}
