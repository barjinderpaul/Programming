import java.util.Scanner;
import java.util.Vector;

public class ds{
    static Scanner sc = new Scanner(System.in);
    public static void main(String args[]){
        ds();
    }

    static void ds(){
        //1. Arrays;
        /* int arr[] = new int[10];    // or int []arr = new int[10];
        for(int i=0;i<3;++i){
            arr[i] = sc.nextInt();
            System.out.println(arr[i] + " " );
        }
        */
        // 2. String array;
        /* int num_of_strings = sc.nextInt();
        String string_arr[] = new String[num_of_strings];
        for(int i=0;i<num_of_strings;++i){
            string_arr[i] = sc.nextLine();
            System.out.println(string_arr[i]);
        } */

        // 3. 2D arrays;
        /* int rows = sc.nextInt();
        int columns = sc.nextInt();
        int array2d[][] = new int[rows][columns];
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                array2d[i][j] = sc.nextInt();
            }
        }

        System.out.println("Displaying array2d");
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++)
                System.out.print(array2d[i][j]+ " ");
            System.out.println();
        } */
        
        //4. Jagged Arrays = different columns in rows;
        /* int arr2d[][] = new int[3][];
        arr2d[0] = new int[1];  //first row with 1 column;
        arr2d[1] = new int[2]; //second row with 2 columns;
        arr2d[2] = new int[3]; //third row with 3 columns;

        for(int i=0;i<1;i++)    //filling first row with 1
            arr2d[0][i] = 1;
        for(int i=0;i<2;i++)    //filling second row with 2
            arr2d[1][i] = 2;
        for(int i=0;i<3;i++)    //filling third row with 3
            arr2d[2][i] = 3;

        for(int i=0;i<3;i++){
            for(int j=0;j<arr2d[i].length;j++)
                System.out.print(arr2d[i][j] + " ");
            System.out.println();
        } */

        //5. Strings;
        //Strings without StringBuffer are immutable;
        /* String s = "Initial string";
        System.out.println(s);
        String s2 = new String("Another STring");
        System.out.println(s2.toLowerCase());

        //String Methods;
            //Replace;
            String temp = "abcdeeeffff",temp2="Hackerranksda is a good Hackerrank";
            System.out.println(temp.replace('d','x'));
            System.out.println(temp.replace("de", "xx"));
            System.out.println(temp2.replace("Hackerrank","RRRR"));

            System.out.println(temp.charAt(1)); //Accessing individual characters of string;

            //Substring;
            System.out.println(temp.substring(1));
            System.out.println(temp.substring(1,2));

            //contains;
            System.out.println(temp.contains("deee"));  //true;
            System.out.println(temp.contains("sdsds")); //false;

            //first occurence;
            System.out.println(temp2.indexOf("Hackerrank"));
            System.out.println(temp.indexOf('b'));
            

        //Strings with StringBuffer are mutable;
        //String Buffer;
        StringBuffer str = new StringBuffer("String made with StringBuffer");
        System.out.println(str);

        str.append("adsa");
        System.out.println(str);

        str.setCharAt(0, 'Z');
        System.out.println(str);

        System.out.println(str.insert(0,"Added in front "));
        System.out.println(str);

         */

         
         
    }

}