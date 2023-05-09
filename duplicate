#include <iostream>
using namespace std;

int angkaDuplikat(int arr[], int n)
{
    int j = 0; 
    
    for (int i = 0; i < n - 1; i++) { // mengiterasi setiap elemen dari array
        if (arr[i] != arr[i + 1]) {
          arr[j++] = arr[i];
        }
    }

   arr[j++] = arr[n - 1];  // simpan elemen terakhir ke index j

    return j;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = angkaDuplikat(arr, n); // panggil function

    for (int i = 0; i < n; i++) {  // cetak array yang sudah dihapus nilai duplikatnya
      cout << arr[i] << " ";
    }

    return 0;
}
