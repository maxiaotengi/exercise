#include <iostream>
/*
 * 注释对不能嵌套
 * 最好使用单行注释注释掉每一行
 * */
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Enter two number:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
