class Animal {
    public void makeNoise() {
        System.out.println("Some random noise");
    }
}

class Dog extends Animal {
    public void makeNoise() {
        System.out.println("Bark!");
    }
}



class inheritance {  
    public static void main(String[] args) {
        Animal ani = new Animal();
        Animal sliceAnimal = new Dog();
        Dog dg = new Dog();

        // Not valid
        // Dog dogDog = new Animal();
        // dogDog.makeNoise();    
        
        ani.makeNoise();
        sliceAnimal.makeNoise();
        dg.makeNoise();


        // instanceof
        if(ani instanceof Animal) {
            System.out.println("Ani instanceof Animal");
        }
        if(sliceAnimal instanceof Animal && sliceAnimal instanceof Dog){
            System.out.println("sliceAnimal instance of bot Animal and Dog");
        }
        if(dg instanceof Animal){
            System.out.println("dg instance of Animal");
        }



        // Another example of Class A and B extends A
        B objB = new B();
        System.out.println(objB.alterString());

    }
}



class A {
    public String s = "a";
    public A() {
        System.out.println("A's constructor called");
        s+="b";
    }
    public A(String someRandomArgument) {
        s+=someRandomArgument;
    }
}

class B extends A{

    public B() {
        // Now only constructor with argument will be called and default constructor will not be called;
        // if super("random") is not written, then default constructor will be called.
        super("random");
    }

    public String alterString(){
        return s+="c";
    }
}