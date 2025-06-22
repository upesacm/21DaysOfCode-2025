int findMax(int arr[], int n) {
    int max;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
//ques-1->ans->max is uninitialized → holds garbage.
//ques-2->ans->May return garbage values or crash.
