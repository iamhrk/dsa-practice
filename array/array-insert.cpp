// This will insert a value to a position starting from the 0 index to the next positon after the end of last value in the array given that it's within array capacity.

#include <bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int capacity, int position, int value, int& length){
    if(length >= capacity){
        cout << "\nArray is full\n";
        return;
    }
    
    if(position < 0 || position > length){
        cout << "\nInvalid postion\n";
        return;
    }
    
    for(int i = length-1; i >=position; i-- ){
        arr[i+1] = arr[i];
    }
    arr[position] = value;
    length++;
}

int main() {
    int capacity = 10;
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << "length is " << length << "\n";
    int position = 8;
    int value = 3;
    cout << "Before inserting " << value << "\n";
    for(int i=0; i<length;i++){
        cout << arr[i] << " ,";
    }
    
    insertElement(arr, capacity, position, value, length);
    cout << "\nAfter inserting " << value << "\n";
    for(int i=0; i<length;i++){
        cout << arr[i] << " ,";
    }
    
    return 0;
}

