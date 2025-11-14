/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>



int main()
{
    int arr [6] = {2,6,1,3,2};
    
    for (int i : arr)
      std::cout << i << std::endl;
    
    int len = sizeof(arr)/sizeof(int);
    int max = arr[0];
    int min = arr[1];
    for(int i=0; i<len-1; i++){
        if (arr[i] > arr[i+1]){
          if (max < arr[i])
            max = arr[i];
          if (min > arr[i+1])            
            min = arr[i+1];
            
        std::cout << max << min << std::endl;
        }else{
          if (min > arr[i])            
            min = arr[i];
          if (max < arr[i+1])            
            max = arr[i+1];    
        std::cout << max << min << std::endl;
        }
    }


    std::cout << max << min << std::endl;
    
    
    return 0;
}
