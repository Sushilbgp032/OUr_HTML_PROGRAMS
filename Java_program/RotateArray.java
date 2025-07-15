import java.util.*;

public class RotateArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Define the size of the array
        int size = 7;
        int[] array = new int[size];

        // Take input from the user
        System.out.println("Enter 7 elements of the array:");
        for (int i = 0; i < size; i++) {
            array[i] = scanner.nextInt();
        }

        // Define the number of positions to rotate
        int positions = 3;

        // Rotate the array
        int[] rotatedArray = rotateRight(array, positions);

        // Print the rotated array
        System.out.println("Array after rotation:");
        for (int num : rotatedArray) {
            System.out.print(num + " ");
        }
    }

    // Method to rotate the array to the right by a given number of positions
    public static int[] rotateRight(int[] array, int positions) {
        int size = array.length;
        int[] result = new int[size];

        for (int i = 0; i < size; i++) {
            // Calculate the new position for each element
            int newIndex = (i + positions) % size;
            result[newIndex] = array[i];
        }

        return result;
    }
}
