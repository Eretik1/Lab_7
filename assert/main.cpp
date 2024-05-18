#include <cassert>
#include <iostream>
#include <vector>
#include "def2.h"

void test1(){
    std::vector<std::vector<int>> bushes{{0,0}, {1,1}, {1, -2}, {3, 3}, {-1, -2}, {-1, 1}, {2, 1}};
    assert(def2(0, 0, 2, -3, 4));
}

void test2(){
    std::vector<std::vector<int>> bushes{{0,0}};
    assert(def2(0, 0, 2, -3, 1));
}

void test3(){
    std::vector<std::vector<int>> bushes{{0,0}};
    assert(def2(2, -3, 2, -3, 1));
}

int main(int, char**){
    std::cout << "test1" << " ";
    void test1();
    std::cout << "OK" << std::endl;
    std::cout << "test2" << " ";
    void test2();
    std::cout << "OK" << std::endl;
    std::cout << "test3" << " ";
    void test3();
    std::cout << "OK" << std::endl;
    return 0;
}
