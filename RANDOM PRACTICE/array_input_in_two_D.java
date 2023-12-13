import java.util.Scanner;

public class array_input_in_two_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size;
        System.out.print("ENTER THE SIZE YOU WANT: ");
        size = sc.nextInt();
        int array[][] = new int[size][size];
        for(int i=0;i<array.length;i++)
        {
            for(int j=0;j<array.length;j++)
            {
                System.out.print("ARRAY["+(i+1)+"]["+(j+1)+"]: ");
                array[i][j] = sc.nextInt();
            }

        }
        System.out.println("2-D ARRAY IS: ");

        for(int i=0;i<array.length;i++)
        {
            for(int j=0;j<array.length;j++)
            {
                System.out.print(array[i][j] + "\t");
                System.out.println(" ");
            }

        }
    }
}
