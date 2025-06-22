int findMax(int arr[], int n) {
    int max = arr[0];  // Initialize with first element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
//Answer of the TASK:
// 1. Bug: Variable 'max' is not initialized before use, leading to garbage comparison.
// 2. Result might be unpredictable or always incorrect depending on memory.
// 3. Fix: Initialize 'max' with arr[0], and loop from i = 1.
