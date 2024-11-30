//
//  Arrays.h
//  SimpleArrays
//
//  Created by Rohit Kumar on 29/11/24.
//

#ifndef Arrays_h
#define Arrays_h

#define MAX_ARRAY_SIZE 100

//a generic swap macro
#define swapelements(a,b)       \
    do{                         \
        typeof(a) temp = a;     \
        a = b;                  \
        b = temp;               \
    }while(0)                   \

class Array{
public:
   Array();
   ~Array();
   
private:
    int length;
    int size;
    int *A;
public:
    int  GetLength();
    int  GetSize();
    void InsertElement(int element);
    void DeleteLastElement();
    void Reverse();
    void ShiftLeft(int shift);
    void ShiftRight(int shift);
    bool IsSortedArray();
    void MergeArrays(Array *dest,Array *source);
    void ReverseUsingAuxillaryArray();
    void DisplayArray();
  
    //TODO: set operations
};

#endif /* Arrays_h */
