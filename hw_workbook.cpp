#include <iostream>
#include <stdlib.h>
/*
bool leapYear(int year){
    if (year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
            return false;
        }
        return true;
    }
}

int main(void)
{
    int year;
    std::cout << "\n INPUT: ";
    std::cin >> year;
    if(leapYear(year)) {
        std::cout<<"Leap Year"<<std::endl;
    }
    else{
        std::cout<<"Common Year"<<std::endl;
    }
    return 0;
}*/
/*
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap(double *a, double *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;
    
    char str1='A', str2='Z';
    swap(&str1,&str2);
    std::cout << str1 << ' ' << str2 << std::endl;
    
    double db11=1.111, db12=5.555;
    swap(&db11,&db12);
    std::cout << db11 << ' ' << db12 << std::endl;
    
    return 0;
}*/

#include <string.h>

struct Person{
    char name[20];
    int age;
};

int main(){
    struct Person *p1 = new struct Person[sizeof(struct Person)];
    void *ptr;
    
    strcpy(p1->name,"김한동");
    p1->age=30;
    
    ptr=p1;
    
    std::cout<<"이름: "<< p1->name <<std::endl;
    std::cout<<"나이: "<< p1->age <<std::endl; // git test
    
    delete[] p1;
    
    return 0;
}