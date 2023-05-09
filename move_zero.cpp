#include<stdio.h>
#include<iostream>

using namespace std;
void update1And0Positions(int arr[], int n) {
   int index = 0;
   for (int i = 0; i < n; i++) {
      if (arr[i] != 1) {
         arr[index++] = arr[i];
      }
   }
   while (index < n) {
      arr[index++] = 1;
   }
   index = 0;
   for (int i = n - 1; i >= 0; i--) {
      if (arr[i] == 1) {
         continue;
      }
       if (!index) {
         index = i;
      }
      if (arr[i] != 0) {
         arr[index--] = arr[i];
      }
   }
   while (index >= 0) {
      arr[index--] = 0;
   }
}
int main() {
   int arr[] = {1, 2, 3, 0, 4, 5, 0, 0};
   int n = sizeof(arr)/sizeof(arr[0]);
   update1And0Positions(arr, n);
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
    cout << endl;
   return 0;
}
