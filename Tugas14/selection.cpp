#include <iostream>
#include <chrono>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n = 10;
    int arr[n] = { 9, 5, 7, 2, 1, 8, 6, 3, 10, 4 };

    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();

    selectionSort(arr, n);

    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

    chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu eksekusi: " << duration.count() << " ms" << endl;

    cout << "Array yang diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int space = sizeof(arr) + sizeof(n);
    cout << "\nKompleksitas ruang: " << space << " bytes" << endl;

    return 0;
}
