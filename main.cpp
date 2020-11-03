#include <iostream>
#include <ctime>
using namespace std;

void insertionSort(int arr[], int size){
  //size > 1 because we compare every element with its previous
  if (size > 1){
    for (int i = 1; i < size; ++i){
      for (int j = i; j > 0; --j){
        if (arr[j] < arr[j-1]){
          swap(arr[j], arr[j-1]);
        }
      }
    }
  }
}

int main() {
  
  const int SIZE = 10;
  int arr[SIZE];
  
  //set seed
  srand(time(0));

  //populate array with items
  for (int i = 0; i < SIZE; ++i){
    arr[i] = rand() % 100;
  }

  insertionSort(arr, SIZE);
  //print array
  for (int i = 0; i < SIZE; ++i){
    cout << arr[i] << endl;
  }
  return 0;
}