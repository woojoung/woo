#include <iostream>

//using namespace std; 절대 하면 안됨 : - 100점

int main(int argc, char** argv)
{   
    /*
    { // 이차원 배열
    std::cout << argv[0] << std::endl;
    if(argc > 1)
    {
        for(int i = 0; i < argc; i++)
            std::cout << argv[i] << std::endl;
        
        
        std::cout << argv[0][1] << std::endl;
    }
    }
    */
    { // cin 연습
    /*
        int a;
        std::cin >> a ;
        
        std::cout << "a= " << a << std::endl;
        
        char* ptr; // 안좋음, enter까지 받기 때문
        std::cin >> ptr; // 문장을 담고 싶을 때, 실행이 되더라도 좋은 코딩이 아니다. 그래서 명시적으로 캐릭터 buff
                         // 를 만들어 놓는다. 
    */
        char buff[1000];
        std::cin.getline(buff, 1000, '\n');
        std::cout << buff << std::endl;
        std::cout << buff[0] << buff[1] << std::endl;
        
        // char ->  숫자로 변형
        // "10" -> '1'(0x31) * 10 + '0'(0x30) * 1
        std::cout << "1" - "0" << std::endl;
        // "2" => 0x32 , "9" => 0x39
        // string을 숫자로 변형
        
    }
    return 0; 
}