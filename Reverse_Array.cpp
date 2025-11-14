/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    
    int arr [10] = {0,1,2,3,4,5,6,7,8,9};
    
    for (int i : arr)
      std::cout << i << std::endl;
    
    int len = sizeof(arr)/sizeof(int);
    
    for(int j=0; j<len/2; j++){
      std::swap(arr[j],arr[len-j-1]);
    }
    
    for (int i : arr)
      std::cout << i << std::endl;
    
    
    return 0;
}
