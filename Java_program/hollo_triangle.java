package Java_program;
import java.util.Scanner;
public class hollo_triangle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the height of the triangle: ");
        int height = scanner.nextInt();
        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= height - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 *i - 1 || i == height) {
                    System.out.print("#"); 
                } else {
                    System.out.print(" "); 
                }
            }
            System.out.println(); 
        }
        scanner.close();
    }
}