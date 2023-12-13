// 1-D array input

import java.util.Scanner;

public class array_intput {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size;
        System.out.print("ENTER THE SIZE YOU WANT: ");
        size = sc.nextInt();
        int array[] = new int[size];
        
        for(int i = 0; i < array.length; i++)
        {
            System.out.print("ARRAY["+ (i+1) +"]: ");
            array[i] = sc.nextInt();
        }
        
        for(int i = 0; i < array.length; i++)
        {
            System.out.println("ARRAY["+ (i+1) +"]: "+ array[i] +" ");
        }
    }
}
