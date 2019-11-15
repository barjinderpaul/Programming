package com.company;
import java.util.*;
// import java.util.Assert.assertEquals;

class equality {
    public static void main(String args[]) {
        // '= =' checks whether both the arguments on LHS and RHS point to same memory location;
        // .equals() checks only the value, whether both the arguments on LHS and RHS have same value.
        
        Integer val1 = new Integer(4);
        Integer val2 = new Integer(2+2);
        System.out.println(val1.equals(val2));
        
        Object obj = new Object();
        // Object obj = new Object(null); compile error
        System.out.println(obj.equals(null));
    }
}