#include <iostream>

/*
 * 取模运算（“Module Operation”）和取余运算（“Complementation ”）
 * 取模后的余数
 * 当我们赋值给一个无符号类型，一个超出它表示范围的值时，结果是初始值对无符号类型表示数值总数取模后的余数。
 * */
int main() {
    unsigned char c = -1;
    int cc = c;
    std::cout << "c is " << c << std::endl;
    std::cout << "cc is " << cc << std::endl;

    
    return 0;
}
