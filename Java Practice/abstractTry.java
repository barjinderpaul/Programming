abstract class A{
    void display(){
        System.out.println("Abstract class method");
    }
}

public class abstractTry{
    public static void main(String args[]){
        A obj = new A();
        obj.display();
    }
}