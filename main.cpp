#include <iostream>
using namespace std;
void repalce(int arr[], int k, int size) {
  int a = k - 1;
  int start = 0;
  while (start < a) {
    int temp = arr[start];
    arr[start] = arr[a];
    arr[a] = temp;
    start++;
    a--;
  }
  int start1 = k;
  int end = size - 1;
  while (start1 < end) {
    int temp1 = arr[start1];
    arr[start1] = arr[end];
    arr[end] = temp1;
    start1++;
    end--;
  }
  int start2 = 0;
  int end2 = size - 1;
  while (start2 < end2) {
    int temp2 = arr[start2];
    arr[start2] = arr[end2];
    arr[end2] = temp2;
    start2++;
    end2--;
  }
}
void printarr(int arr2[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr2[i] << "\t";
  }
}

int main() {
  // std::cout << "Hello World!\n";
  int arr1[] = {1, 2, 3, 4, 5};
  int k = 2;
  int size = sizeof(arr1) / sizeof(arr1[0]);
  repalce(arr1, k, size);
  printarr(arr1, size);
}