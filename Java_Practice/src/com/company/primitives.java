class primitives {
    public static void main(String[] args) {

        // checking types;
        Integer a = new Integer(1);
        System.out.println("a has class = " + int.class);
        System.out.println("Another way = " + a.getClass());

        /**
         * Why do even short and byte exist if even most of inbuild Java APIs/libraries use int as their data type;
         * Because :
         *  Even in a class, any field will take a single slot which is of size of a single int (32bits or 4 bytes) and wide types such as 
         *  long and double take two slotes; thus having a short or byte as a data type will not matter in a class as it will take the same space as 1 int;
         *  But, byte and short can benefit in cases where :
         *      new byte[1000] will take 1000 bytes whereas new int[1000] will take 4000 bytes, so in these cases they are quite useful.
         */

        // Diff ways to declare double
        double d = 1d;
        System.out.println(d);
        d = 1.0e3; //exponent form
        System.out.println(d);

        float f = 1f;
        System.out.println(f);
        

        long val = 12345678997L;
        int valI = (int)val;
        // garbage value
        System.out.println(valI);


        int ab = 1;
        int b = Integer.MAX_VALUE;
        // long c = ab+a; //overflows
        long c = (long)ab + b; //works 
        System.out.println(c);
    }
}