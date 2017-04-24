#include <iostream>
#include <stdlib.h>

int main() {
    int Size;
    char *info; // 포인터 배열
    
    std::cout << "Input size of array : " ;
    std::cin >> Size; // 사용자로부터 배열의 사이즈 입력 받음
    
    info=(char *)malloc(sizeof(char) * Size); // 배열 동적 할당 설정
    
    for(int i=0; i<Size ; i++)
    {
        //std::cout << "Input : " << info[i] << std::endl;
        //std::cout << "Input : " << std::endl;
        std::cout << "Input : ";
        std::cin >> info[i] ;
    }
    
    std::cout << "User Input : " << info << std::endl;
    
    free(info); // 동적할당 해제
    return 0;

}
