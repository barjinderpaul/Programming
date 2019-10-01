class calculations{
    int a,b,c,d;
    calculations(int a, int b, int c, int d){
        a = a;
        b = b;
        c = c;
        d = d;
    }
    int add(){
        return a+b+c+d;
    }
    int mul(){
        return a*b*c*d;
    }
    int divide(){
        int c=0;
        try{
             c = (a*b)/(c*d);
        }
        catch(ArithmeticException e){
            System.out.println(e.getMessage());
        }
        return c;

    }
    int sub(){
        return a-b-c-d;
    } 
}

public class exceptions{
    public static void main(String args[]){
        calculations obj = new calculations(1,2,3,0);
        System.out.println(obj.add());
        System.out.println(obj.mul());
        System.out.println(obj.divide());
        System.out.println(obj.sub());

    }   
}