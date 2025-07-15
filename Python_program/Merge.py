# Input arrays
arr1 = [5, 9, 3, 2, 4, 7]
arr2 = [5, 1, 6, 0]

# Merge the two arrays
merged = arr1 + arr2

# Remove the element at index 3
del merged[3]

# Sort the array in decreasing order
merged.sort(reverse=True)

# Print the resulting array
print("Array after removing element at index 3 and sorting in decreasing order:")
print(merged)
