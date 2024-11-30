//
//  Arrays.cpp
//  SimpleArrays
//
//  Created by Rohit Kumar on 29/11/24.
//

#include "Arrays.h"
#include <iostream>

Array::Array():length(0),size(0),A(nullptr)
{
    A = new int[MAX_ARRAY_SIZE];
}

Array::~Array()
{
    length = 0;
    size = 0;
    delete [] A;
}

int  Array::GetLength()
{
    return length;
}
int  Array::GetSize()
{
    return size;
}
void Array::InsertElement(int element)
{
    A[length++] = element;
}
void Array::Reverse()
{
    
}
void Array::ShiftLeft(int shift)
{
}
void Array::ShiftRight(int shift)
{
    
}
bool Array::IsSortedArray()
{
    return false;
}
void Array::MergeArrays(Array *dest,Array *source)
{
    
}
void Array::ReverseUsingAuxillaryArray()
{
    
}

void Array::DisplayArray()
{
    for(int i = 0 ; i < length ; i++ )
        std::cout<<A[i]<<" ";
    std::cout<<"\n";
}



