//
//  main.cpp
//  MergeSort
//
//  Created by Prashant Gurung on 13/04/2022.
//

#include <iostream>
#include "MergeSort.h"

void displayArray(int *arr, int size)
{
    std::cout << " { " ;
    for(int i=0;i<size;i++)
        std::cout << arr[i] << " " ;
    
    std::cout << "} " << std::endl;
}

int main() {

    int array1[] = {8,3,2,4,1,65,7,83,3,4,6,6};
    
    displayArray(array1, 12);
    
    mergeSort(array1, 0, 11);
    
    displayArray(array1, 12);
    
    std::cin.get();
}

