#include <iostream>
#include <stdlib.h>

int main(int argc, const char** argv){
    char buff[1000];
    
    std::cout <<"Enter the expression. " << std::endl;
    
    std::cin.getline(buff,1000);
    /// 111+444
    int oprnd_1 = (buff[0]-'0')*100 + (buff[1]-'0')*10 + (buff[2]-'0')*1 ;
    int oprnd_2 = (buff[4]-'0')*100 + (buff[5]-'0')*10 + (buff[6]-'0')*1; 
    // buff[]-'0' 을 빼주는 이유는 캐릭터 이므로, ascii 코드를 
    
    switch(buff[3]){
        case '+' :
            std::cout << oprnd_1 + oprnd_2 << std::endl;
            break;
        case '-' :
            std::cout << oprnd_1 + oprnd_2 << std::endl;
            break;
        case '*' :
            std::cout << oprnd_1 + oprnd_2 << std::endl;
            break;
        case '/' :
            std::cout << oprnd_1 + oprnd_2 << std::endl;
            break;
        default;
        break;
    }
    return 0;
}