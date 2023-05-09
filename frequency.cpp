#include <iostream>
using namespace std;

int Frequency(int arr[], int n, int x)
{
    int frequency = 0;

    // mengiterasi setiap elemen pada array
    for (int i = 0; i < n; i++) {
        
        if (arr[i] == x) {
            frequency++;
        }
    }

    return frequency;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x ;

    cout<<"masukkan frequency dari nilai yang ingin dicari : ";
    cin >> x ;

    int frequency = Frequency(arr, n, x);

    cout << "frequency dari angka " << x << " di dalam array adalah " << frequency << endl;

    return 0;
}
 
