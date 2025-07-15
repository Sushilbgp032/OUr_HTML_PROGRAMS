def rotate_array(arr, positions):
    # Calculate effective positions to rotate (to handle cases > len(arr))
    positions = positions % len(arr)
    return arr[-positions:] + arr[:-positions]

if __name__ == "__main__":
    # Input array of size 7
    print("Enter 7 elements of the array separated by space:")
    arr = list(map(int, input().split()))
    
    if len(arr) != 7:
        print("Error: You must enter exactly 7 elements.")
    else:
        # Rotate the array by 3 positions to the right
        result = rotate_array(arr, 3)
        print("Rotated Array:", result)
