//
//  main.cpp
//  BinarySearch
//
//  Created by Rohit Kumar on 28/11/24.
//

#include <iostream>

int BinarySearch(int key , int high , int* arr);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr_size = 0,key,index;
    int* arr;
    std::cout << "Enter the number of elements:\n";
    std::cin>>arr_size;
    arr = new int[arr_size];
    for(int i=0 ; i < arr_size ; i++)
    {
        std::cin>>arr[i];
    }
    
    std::cout << "Enter the key:\n";
    std::cin>>key;
    index = BinarySearch(key, arr_size-1, arr);
    if(index == -1 )
        std::cout<<"key not found\n";
    else
        std::cout<<"key found at index:"<<index<<std::endl;
    return 0;
}

//this can also be done using recursion
int BinarySearch(int key , int high , int* arr)
{
    int low = 0,mid = 0;
    while(low <= high)
    {
        mid = (high+low)/2;
        if(key == arr[mid])
            return mid;
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1; 
}
