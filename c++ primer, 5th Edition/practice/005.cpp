#include <iostream>

/*
 * 当遇到文件结束符（EOF），或遇到一个无效的输入时，
 * istream对象会变为无效的状态，输出为假
 * */
int main() {
    int sum = 0, val = 0;
    while (std::cin >> val)
        sum += val;
    std::cout << "sum is " << sum << std::endl;
    return 0;
}
