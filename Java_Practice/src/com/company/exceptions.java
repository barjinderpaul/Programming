import java.io.IOException;


class exceptions {

    public void doStuff() throws IOException {
        throw new IOException();
    }
     public String returnStatementsEverywhere(StringBuilder whatHappened) {
        try {
            whatHappened.append("try");
            doStuff();
            return "from try";
        } catch (IOException e) {
            whatHappened.append(", catch");
            return "from catch";
        } finally {
            whatHappened.append(", finally");
            /**
             * return "from try", return "from catch"  does not have any effect on the program
             * return from finally is the final output which is displayed on the screen.
             */
            System.out.println("what happened in finally = " + whatHappened.toString());
            
            return "from finally";
        }
    }

    
    public void returnInFinallyBlock() {
        StringBuilder whatHappened = new StringBuilder();
        System.out.println(returnStatementsEverywhere(whatHappened));
    }

    public static void main(String[] args) {
        exceptions e = new exceptions();
        e.returnInFinallyBlock();

        // Validation handling can also be done with Exceptions; The exception we can throw when argument not valid is IllegalArgumentException;

    }
}

