#include <iostream>
using namespace std;

int main() {
    int arr[8] = {42, 32, 33, 52, 37, 47, 51, 45};
    int n = 8;

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int numBins = 10;          // number of bins
    int bins[10][8];           // 10 bins, max 8 elements per bin
    int count[10] = {0};       // count of elements in each bin

    // Put elements into bins
    for (int i = 0; i < n; i++) {
        int index = arr[i] / 10;
        bins[index][count[index]] = arr[i];
        count[index]++;
    }

    // Sort each bin using simple insertion sort
    for (int i = 0; i < numBins; i++) {
        for (int j = 1; j < count[i]; j++) {
            int key = bins[i][j];
            int k = j - 1;
            while (k >= 0 && bins[i][k] > key) {
                bins[i][k + 1] = bins[i][k];
                k--;
            }
            bins[i][k + 1] = key;
        }
    }

    // Merge all bins into the array
    int idx = 0;
    for (int i = 0; i < numBins; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[idx++] = bins[i][j];
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}