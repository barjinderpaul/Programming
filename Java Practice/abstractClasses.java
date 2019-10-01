abstract class A{
    int val=0;
    void display(){
        System.out.println("Abstract A");
    }
    abstract void absDisplay();
}


class B extends A{
    int val2;
    void display2(){
        System.out.println("Class B");
    }
    void absDisplay(){
        System.out.println("abs Display");
    }
}

public class abstractClasses{
    public static void main(String args[]){
        //instantiating abstract class is not applicable;
        B obj = new B();
        obj.display();
        obj.display2();
        obj.absDisplay();
        System.out.println(obj.val);
    }

}