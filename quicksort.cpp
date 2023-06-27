#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high){
    int pivot = arr[(low+high)/2];
    int left = low, right = high;
    
    while (left <= right){
        while (arr[left] < pivot){
            left++;
        }
        while (arr[right] > pivot){
            right--;
        }
        if (left <= right){
            int temp = arr[left];
            arr[left] = arr[right]; 
            arr[right] = temp;
            left++;
            right--;
        }
    }
    
    /* recurse until left side(lower than pivot) is sorted */
    if (low < right){
        quickSort(arr, low, right);
    }
    /* recurse until right side(higher than pivot) is sorted */
    if (left < high){
        quickSort(arr, left, high);
    }
}

int main(){
    int arr[7] = {5, 1, 6, 3, 4, 2, 7};
    int len = sizeof(arr)/sizeof(int);
    
    quickSort(arr, 0, len-1);
    
    for (int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
