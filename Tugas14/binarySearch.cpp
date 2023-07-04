#include <iostream>
#include <chrono>

using namespace std;
int binarySearch(int array[], int x, int low, int high);


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 19;

    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();

    int result = binarySearch(arr, x, 0, n-1);

    chrono::steady_clock::time_point endTime = chrono::steady_clock::now();

    chrono::duration<double, milli> duration = endTime - startTime;
    cout << "Waktu eksekusi: " << duration.count() << " ms" << endl;

    if (result == -1){
        cout << "Tidak  ditemukan" ;
    } else {
        cout << "Element ditemukan pada index ke " << result;
    }

    int space = sizeof(arr) + sizeof(n);
    cout << "\nKompleksitas ruang: " << space << " bytes" << endl;

return 0;
}


int binarySearch (int array[], int x, int low, int high){
    if (high >= low){
        int mid = low +(high - low)/2;
        if (array[mid]==x)
            return mid;
        if (array[mid]>x)
            return binarySearch(array, x, low, mid-1);
        return binarySearch(array, x, mid+1, high);
    }
    return -1;

}



