import java.util.Calendar;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;


class dateTime {
    private static Date date = new Date(100010001000L);
    public static void main(String[] args) {
        Calendar cal = Calendar.getInstance();
        System.out.println(cal.toString());
        System.out.println();
        System.out.println();
        cal.setTime(date);
        System.out.println(cal.toString());
        System.out.println();
        System.out.println();
        cal.roll(Calendar.MONTH, 12);
        System.out.println(cal.toString());
        System.out.println();
        System.out.println();
        System.out.println(cal.getTime().toString());

        System.out.println(new Object().equals(null));  
        if(null == null ){
            System.out.println("equal");
        }
        else{
            System.out.println("not equal");
        }
    }
}