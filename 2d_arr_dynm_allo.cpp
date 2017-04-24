#include <iostream>
#include <stdlib.h>

int main()
{   int i;
    int xSize, ySize ;
    int **coordinate; 
    
    std::cout << "Input size of X : " ;
    std::cin >> xSize;
    std::cout << "Input size of Y : " ;
    std::cin >> ySize;
    
    coordinate = (int **)malloc(sizeof(int)*xSize);
    
    for(i=0;i<xSize;i++)
    {
        coordinate[i]=(int *)malloc(sizeof(int)*ySize);
    }
    
    for(i=0;i<xSize;i++)
    {
        free(coordinate[i]);
    }
    free(coordinate);
    return 0;
}