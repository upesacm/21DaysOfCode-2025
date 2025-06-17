#include <iostream>
using namespace std;

bool ArraysEqual(int arr1[], int arr2[], int size) {
    
    for (int i = 0; i < size; i++) {
        int count1 = 0, count2 = 0;
        
        
        for (int j = 0; j < size; j++) {
            if (arr1[j] == arr1[i]) count1++;
            if (arr2[j] == arr1[i]) count2++;
        }
        
        if (count1 != count2) return false;
    }
    return true;
}

int main() {
    int size;
    cout << "Enter the size of arrays: ";
    cin >> size;

    int* arr1 = new int[size];
    int* arr2 = new int[size];
    
    cout << "Enter elements of first array: ";
    for (int i = 0; i < size; i++) cin >> arr1[i];
    
    cout << "Enter elements of second array: ";
    for (int i = 0; i < size; i++) cin >> arr2[i];

    if (ArraysEqual(arr1, arr2, size)) {
        cout << "Arrays are equal" << endl;
    } else {
        cout << "Arrays are not equal" << endl;
    }

    return 0;
}