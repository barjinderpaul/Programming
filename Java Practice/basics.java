import java.lang.Math;
import java.lang.System;
import java.util.Scanner;
public class basics {
    static String global = "Global string.";
    static Scanner sc = new Scanner(System.in);
    public static void main(String args[]) {
        System.out.println(global); // Global needs to be static because main is a static method
        String local = "Local string.";
        System.out.println(local);
         data_types();
         special_operators();
         math_functions();
         playing_with_switch();
        
    }

    static void data_types() {
        int a = 5;
        long l = 5L;
        char ch = 'c';
        float f = 5f;
        double d = 5.5d;
        boolean b = false;
        System.out.println(a + " " + l + " " + f + " " + d + " " + b + " " + ch);

    }

    static void special_operators() {
        basics obj = new basics();
        if (obj instanceof basics) // instanceof is a special operator in java;
            System.out.println("obj is an object/instance of class basics");
        obj.data_types(); // .(DOT) operator is a special operator in java;
        
    }

    static void math_functions() {
        // Access all others with Math.
        System.out.println(Math.sqrt(24));
        System.out.println(Math.ceil(23));
    }

    static void playing_with_switch(){
        System.out.println("Select your choice");
        System.out.println("1. A -> Apple");
        System.out.println("2. B -> Banana");
        System.out.println("3. C -> Cherry");
        char choice;
        try{
            switch(choice = (char)System.in.read())
            {
                case 'a' :
                case 'A' : System.out.println("A -> Apple");
                            break;
                case 'b':
                case 'B' : System.out.println("B -> Banana");
                            break;
                case 'c':
                case 'C' : System.out.println("C -> Cherry");
                            break;
                
                default : System.out.println("Invalid choice");
            }
        }
        catch(Exception e){
            System.out.println("IO error");
        }

    }

    
}