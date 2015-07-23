//  BinarySearch
//
//  Created by eajang on 2015. 7. 23..

#include <stdio.h>

int binarySearch(int arr[], int value, int size)
{
    int low = 0;
    int high = size - 1;
    int mid;
    
    while(low <= high) {
        mid = (high+low)/2;
        if (value == arr[mid]) {
            return mid;
        } else if (value < arr[mid]) {
            high = mid - 1;
        } else if (value > arr[mid]) {
            low = mid + 1;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[10] = {4,5,6,7,8,9,10,11,12,13};
    int findValue = 8;
    int indexOfValue = binarySearch(arr, findValue, (sizeof(arr)/sizeof(int)));
    printf("%d", indexOfValue);
    return 0;
}
