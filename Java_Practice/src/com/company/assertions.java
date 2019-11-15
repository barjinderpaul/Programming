package com.company;

import java.util.Scanner;



public class assertions {

    static void checkValidAgeToVoteWithAssertion(String name, int age) {

        /**
         * assertEquals(stringMessage,value,value is deprecated.)
         */

        assert(age>=18);
        System.out.println("Eligible to vote");
    }

    static void checkValidAgeToVoteWithException(String name, int age) {
        try {
            if(age < 18){
                throw new Exception("Not eligble to vote");
            }
        }
        catch(Exception e) {
            System.out.println(e.getMessage());
        }
    }

    static void checkingWithAssertSame() {
        Integer original = new Integer(1);
        Integer same = original;
        boolean result = same == original;
        System.out.println("Equal or not = " + result );
        original++;
        result = same == original;
        System.out.println("Equal or not = " + result );
        
        original++;
        System.out.println("same = " + same + " original" + original );
        original = same;
        System.out.println("same = " + same + " original" + original );
        System.out.println("size of same = " + same.SIZE/8 + " size of original = " + original.SIZE/8);
        Integer diff = new Integer(1);
        System.out.println(original + same + diff);
        // Assertion.assertEquals(original,same);
    }

    static void ifBlock(){
        if( (1|1) ==1  ){
            System.out.println("Truee");
        }
        else {
            System.out.println("false");
        }
    }

    static void checking() {
        int a = 1;
        int b = a;
        a++;
        System.out.println("a,b = "+ a + " " + b);
    }
    public static void main(String  args[]) {

        // practicing assertions;
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int age = sc.nextInt();
        
        checkValidAgeToVoteWithException(name,age);

        // checkValidAgeToVoteWithAssertion(name,age);


        checkingWithAssertSame();

        checking();

        ifBlock();

        

    }
}