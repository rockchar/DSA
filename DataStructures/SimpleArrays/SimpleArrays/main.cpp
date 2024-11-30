//
//  main.cpp
//  SimpleArrays
//
//  Created by Rohit Kumar on 29/11/24.
//

#include <iostream>
#include "Arrays.h"

//driver function
int DisplayMenu();

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Array a;
    std::cout << "Arrays!\n";
    for(int i = 0 ; i < 10 ; i ++)
        a.InsertElement(i);
    a.DisplayArray();
    int option;
    while((option = DisplayMenu()!=0))
    {
        std::cout<<"option selected\n";
        switch(option)
        {
            case 1:
                std::cout<<"Reverse the array \n";
                a.Reverse();
                break;
            case 2:
                std::cout<<"Check if array is sorted \n";
                break;
            case 3:
                std::cout<<"Merge two arrays \n";
                break;
            case 4:
                std::cout<<"Set operations on arrays Union, Intersection and Difference\n";
                break;
            case 5:
                std::cout<<"Shift array Left";
                break;
            case 6:
                std::cout<<"Shift array Right";
                break;
            default:
                std::cout<<"Unknown option\n";
                break;
        }
    }
    std::cout<<"Exiting\n";
    return 0;
}

int DisplayMenu()
{
    int option;
    std::cout<<"Enter the choice:\n 1. Reverse and shift an array \n 2. Check if array is sorted \n 3. Merge two arrays \n 4. Set operations on arrays Union, Intersection and Difference\n 5. Shift array Left \n 6. Shift array Right \n Press 0 to Exit"<<std::endl;
    std::cin>>option;
    return option;
}
