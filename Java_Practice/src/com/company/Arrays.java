import java.util.Arrays;

class Arrayss {
    public static void main(String[] args) {
        int arr[] = new int[]{0};
        int arr2[] = new int[]{0};

        // These are not same
        System.out.println(arr.hashCode() + " " + arr2.hashCode());

        // These are same 
        System.out.println(Arrays.hashCode(arr) + " " + Arrays.hashCode(arr2) );

    }
}