class enums {
    enum Colors {
        Blue,Black
    }

    enum Colors2 {
        Blue,Green
    }

    enum Colors3 {
        Red(10),Black(10),Green(10);
        private int selfValue;
        Colors3(int value){
            selfValue = value;
        }

    }
    public static void main(String[] args) {
        System.out.println(Colors.class);
        System.out.println(Colors.Black);

        Colors2 a = Colors2.Blue;
        System.out.println(a.Blue);

        Colors2 []colors = Colors2.values();
        for(Colors2 color : colors){
            System.out.println(color);
        }

        Colors3 b = Colors3.Red;
        System.out.println(b);

        System.out.println(Colors3.Red.selfValue);
    }
}