interface students{
    void getid();
}
interface faculty{
    void getid();
}

class go implements students,faculty{
    public void getid(){
        System.out.println("getid");
    }

}

public class abstractTry2{
    public static void main(String args[]){
        go obj = new go();
        obj.getid();
    }
}