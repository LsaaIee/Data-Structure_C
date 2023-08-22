#include <stdio.h>

/* BSearch without using recursion */
int BSearch1(int arr[], int len, int target){
    int first = 0;
    int last = len-1;
    int mid;
    
    while (first <= last){
        mid = (first+last)/2;
        
        if (target == arr[mid]){
            return mid;
        }
        else {
            if (target < arr[mid]){
                last = mid-1;
            }
            else {
                first = mid+1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int idx;
    
    idx = BSearch1(arr,sizeof(arr)/sizeof(int), 7);
    if (idx == -1){
        printf("Fail to search the target\n");
    }
    else {
        printf("Target is saved at index %d\n", idx);
    }
    
    idx = BSearch1(arr, sizeof(arr)/sizeof(int), 4);
    if (idx == -1){
        printf("Fail to search the target\n");
    }
    else {
        printf("Target is saved at index %d\n", idx);
    }
    
    return 0;
}

/* BSearch using recursion (ver.1 is better in terms of time complexity) */
int BSearch2(int arr[], int first, int last, int target){
    int mid;
    if (first > last){
        return -1;
    }
    mid = (first+last)/2;
    
    if (arr[mid] == target){
        return mid;
    }
    else if (target < arr[mid]){
        return BSearch2(arr, first, mid-1, target); //re-search from first idx to mid-1 as the target is smaller than the mid idx's element
    }
    else {
        return BSearch2(arr, mid+1, last, target); //re-search from mid-1 idx to last as the target is larger than the mid idx's element
    }
}

void main(){
    int arr[] = {1, 3, 5, 7, 9};
    int idx;
    
    idx = BSearch2(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
    if (idx == -1){
        printf("Fail to search the target\n");
    }
    else {
        printf("Target is saved at index %d\n", idx);
    }
    
    idx = BSearch2(arr, 0, sizeof(arr)/sizeof(int)-1, 4);
    if (idx == -1){
        printf("Fail to search the target\n");
    }
    else {
        printf("Target is saved at index %d\n", idx);
    }
}
