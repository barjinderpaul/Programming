class strings {


    static void checkTryCatch() {
        System.out.println("Checking String.format Exception");
        try {
            String.format("%s %s %s", "a", "b");
        } catch (Exception e) {
            System.out.println(e.getMessage() + " " + e.getClass());
        }
        System.out.println("Ending checking String.format Exception");
    }
    public static void main(String[] args) {
        String s = "abc";
        System.out.println(s.getClass());

        System.out.println(new String("").isEmpty());
        System.out.println(new String(" ").isEmpty());

        System.out.println(new String(" abc ").length());

        // trim deletes the spaces at the starting at ending of the string;
        // it will also remove all \t as well
        System.out.println(new String(" abc ").trim());

        System.out.println(new String(" lowercase ").toUpperCase());

        //compareTo(string) || compareTo(string object);
        // if same returns 0
        // if compared with empty string, returns length of the string
        // else return ascii difference of first character
        // case specific
        
        // compareToIgnoreCase is not case specific.
        
        System.out.println("abc".compareTo("abc"));
        System.out.println("abc".compareTo("bcd"));
        System.out.println("abc".compareTo(""));

        //startsWith: checks whether a string value starts with a specific prefix;
        // endsWith : check whether a string value ends with a specific suffix or not;
        System.out.println("abc".startsWith("a"));

        // substring(startingIndex, endingIndex[optional]) :
        System.out.println("substring".substring(1));
        System.out.println("substring".substring(1,2));
        // empty string because the result is endingIndex-1;
        System.out.println("substring".substring(1,1));

        // contains checks if certain pattern is present in the string or not;
        // returns true or false;
        // is case specific.
        System.out.println("abc def".contains("abc"));

        // "string here".replace("here",there)


        // As strings are immutable in java, so we use StringBuffer and StringBuilder as replacement.
        // StringBuffer is synchronized at backend and is preferable when synchronization is needed,
        // else StringBuilder is used as it is asynchronous and faster.

        StringBuilder str = new StringBuilder("this is a mutable string");
        System.out.println(str);
        int index = 0;
        str.setCharAt(index,'A');
        System.out.println(str);


        checkTryCatch();

    }
}