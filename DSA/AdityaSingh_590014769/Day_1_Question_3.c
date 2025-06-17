/*Your task: Calculate and return the sum of all elements in the array.
 Examples Input: [1, 2, 3, 4, 5] 
 Output: 15 make the code very simple
*/
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
 s       canf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    return 0;
}
