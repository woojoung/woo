#include <iostream>
#include <stdlib.h>

int main()
{  
    int xSize, ySize;
    int **coordinate;
    
    std::cout << "Type size of array : " << std::endl;
    std::cin >> xSize;
    std::cin >> ySize;
    
    coordinate = (int**) malloc ( sizeof(int*) * xSize );
    for(int i=0; i<xSize; i++){
        coordinate[i] = (int*) malloc ( sizeof(int) * ySize );
    }
    for(int i=0; i<xSize; i++){
        free(coordinate[i]);
    }
    free(coordinate);
    return 0;
    
}