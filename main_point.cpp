#include <iostream>
#include "sally.h"
using namespace std;

int main()
{

    sally sallyObject;
    sally *sallyPointer = &sallyObject;//定义一个指针 取地址sallyobject
    sallyObject.printCrap();
    sallyPointer->printCrap(); //指针打印地址内存的值。

    return 0;
}
