#include <iostream>
#include <chrono>

using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int n = 10;
    int arr[n] = { 9, 5, 7, 2, 1, 8, 6, 3, 10, 4 };

    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();

    insertionSort(arr, n);

    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

    chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu eksekusi: " << duration.count() << " ms" << endl;

    cout << "Array yang diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int space = sizeof(arr) + sizeof(n);
    cout << "Kompleksitas ruang: " << space << " bytes" << endl;

    return 0;
}
