#include <iostream>
using namespace std;

// Ternary Search implementation
int ternarySearch(int arr[], int left, int right, int key) {
    while (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == key) return mid1;
        if (arr[mid2] == key) return mid2;

        if (key < arr[mid1]) right = mid1 - 1;
        else if (key > arr[mid2]) left = mid2 + 1;
        else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    return -1;
}

// Interpolation Search implementation
int interpolationSearch(int arr[], int low, int high, int key) {
    while (low <= high && key >= arr[low] && key <= arr[high]) {
        if (low == high) {
            return (arr[low] == key) ? low : -1;
        }

        // Estimating the position
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]);

        if (arr[pos] == key) return pos;
        if (arr[pos] < key) low = pos + 1;
        else high = pos - 1;
    }
    return -1;
}

// Main function to test both searches
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the number to search: ";
    cin >> key;

    // Ternary Search
    int indexTernary = ternarySearch(arr, 0, size - 1, key);
    if (indexTernary != -1)
        cout << "Ternary Search: Element found at index " << indexTernary << endl;
    else
        cout << "Ternary Search: Element not found." << endl;

    // Interpolation Search
    int indexInterpolation = interpolationSearch(arr, 0, size - 1, key);
    if (indexInterpolation != -1)
        cout << "Interpolation Search: Element found at index " << indexInterpolation << endl;
    else
        cout << "Interpolation Search: Element not found." << endl;

    return 0;
}