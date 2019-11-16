class generics {
    public static void main(String[] args) 
    {

        // when we print any object in java, the ,toString() method is implicitly invoked in java;
        // So, what we can do is that we can override the toString() method to display the format in our specific way
        Integer iobj = new Integer(0);
        System.out.println(iobj.toString());
        Object obj = new Object();
        System.out.println(obj);
        // we can override the toString() method to display out in any specific format with the help of StringBuilder or anything else.
        System.out.println(obj.toString());
        
    }
}