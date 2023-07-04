#include <iostream>
#include <chrono>

using namespace std;

int search (int array[], int n, int x);

int main(){
    int arr[] = {5, 4, 9, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();

    int result = search(arr, n, x);

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


int search (int array[], int n, int x){

for (int i = 0; i<n;i++)
    if (array[i]==x)
    return i;

    return -1;

}



