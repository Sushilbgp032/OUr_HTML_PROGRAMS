package Java_program;
public class Rotate_array {public class RotateArray {
    public static void main(String[] args) {
        // Define the array and the hard-coded rotation position
        int[] array = {35, 26, 17, 49, 51, 67, 39};
        int rotationPosition = 3; // Number of positions to rotate to the right

        // Print the original array
        System.out.println("Original Array:");
        printArray(array);

        // Perform the rotation
        int[] rotatedArray = rotateArray(array, rotationPosition);

        // Print the rotated array
        System.out.println("\nRotated Array:");
        printArray(rotatedArray);
    }

    // Method to rotate an array to the right by a given number of positions
    public static int[] rotateArray(int[] array, int positions) {
        int size = array.length;
        int[] result = new int[size];

        // Normalize the number of positions in case it's greater than the array size
        positions = positions % size;

        // Copy the rotated elements into the result array
        for (int i = 0; i < size; i++) {
            result[(i + positions) % size] = array[i];
        }

        return result;
    }

    // Method to print an array
    public static void printArray(int[] array) {
        for (int num : array) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}

    

