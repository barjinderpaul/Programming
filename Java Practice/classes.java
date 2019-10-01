public class classes{
    static String s;
    
    classes(){
        s = "this is classes";
    }

    classes(String s){
        this.s = s;
    }
    
    public static void main(String args[]){
        classes obj = new classes("Parameterized constructor of super class");
        System.out.println(s);
        s = "adsadad";
        //Object of base class;
        extended_class obj2 = new extended_class();
        obj2.child_class();
        obj2.protected_method();
        obj2.public_method();
        System.out.println(obj2.s);

    }

    private void private_method(){
        System.out.println("Private function");
    }
    
    protected void protected_method() {
        System.out.println("Protected Method");
    }

    public void public_method() {
        System.out.println("Public method");
    }
}


class extended_class extends classes{
        public void child_class(){
        System.out.println("Function of child class");
    }
    
}