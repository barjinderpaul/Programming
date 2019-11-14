package com.company;

import java.util.Scanner;


public class assertions {

    static void checkValidAgeToVoteWithAssertion(String name, int age) {
        assert(age>=18);
        System.out.println("Eligible to vote");
    }

    static void checkValidAgeToVoteWithException(String name, int age) {
        try {
            if(age < 18){
                throw   new Exception("Not eligble to vote");
            }
        }
        catch(Exception e) {
            System.out.println(e.getMessage());
        }
    }

    public static void main(String  args[]) {

        // practicing assertions;
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int age = sc.nextInt();
        
        checkValidAgeToVoteWithException(name,age);

        checkValidAgeToVoteWithAssertion(name,age);

    }
}