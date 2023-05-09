#include<iostream>
using namespace std;


int move_zero(int arr[], int n) {

  int angka = n - 1;
  int hitung = n - 1;

  while(hitung >= 0) {
    if(arr[hitung] != 0) {
      arr[angka] = arr[hitung];
      angka--;
    }

    hitung--;
  }

  while((angka) >= 0) {
    arr[angka] = 0;
    angka--;
  }
   return angka;
}
int main() {
  int arr[] = {1, 2, 3, 0, 4, 5, 0, 0};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Sebelum : ";
  
  for(int i = 0 ; i<n; i++) {
    cout << arr[i] << " ";
    
  }  
  
  move_zero(arr, n);
  
  cout << endl<< "Sesudah : ";
  for(int i = 0 ; i < n; i++) {
    cout << arr[i] << " ";
    
} 
}
