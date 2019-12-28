#include <iostream>

/*
 * for语句包含循环头和循环体，循环头控制循环次数，
 * 变量val仅在for循环内部存在，在循环结束之后是不能使用的。
 * 初始化语句只在for循环入口处执行一次。
 * */
int main() {
    int sum = 0;
    for (int val = 1; val <= 10; ++val)
        sum += val;

    //std::cout << val << std::endl;
    std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
