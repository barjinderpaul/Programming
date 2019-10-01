interface A{
    void display();
    default void display2(){
        System.out.println("Display2 defined in interface A");
    }
}

interface B extends A{
    default void display3(){
        System.out.println("Dispaly 3 in interface B");
    }
    
}

interface individual{
    void individualDisplay();
}

 class multiple_interfaces implements individual,B{
    public void display(){
        System.out.println("Display from A");
    }
    public void individualDisplay(){
        System.out.println("Individual Display");
    }
    void displayInterfaces(){
        System.out.println("Function from multiple interfaces");
    }
} 

public class interfaces{
    public static void main(String args[]){
        multiple_interfaces obj = new multiple_interfaces();
        obj.display();
        obj.display2();
        obj.display3();
        obj.individualDisplay();
        obj.displayInterfaces();
    }
}
