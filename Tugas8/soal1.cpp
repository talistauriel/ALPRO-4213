#include <iostream>
using namespace std;
void minEven(int array[], int n);
bool isOdd(int x);

int main()
{
    int array[5]={6,7,5,4,2};
    int n = sizeof(array)/sizeof(array[0]);
    minEven(array,n);
    return 0;
}

void minEven (int array[], int n)
{
    int min_Even = array[0];
    int Idx = 0;
    for (int i=0; i<n; i++){
        if (array[i] <= min_Even && !isOdd(array[i])){
            min_Even = array[i];
            Idx = i;
        }
    }
    cout << "Nilai genap terkecil dalam array adalah " << min_Even << " terletak pada index ke-" << Idx ;
}

bool isOdd (int x)
{
    if (x % 2 == 1){
        return true;
    } else {
        return false;
    }
}
