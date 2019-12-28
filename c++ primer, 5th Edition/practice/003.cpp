#include <iostream>

/*
 * while(condition)
 *      statement
 *
 * 下面的循环体是由两条语句组成的语句块，
 * 语句块（block）也是语句的一种，
 * */
int main() {
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }
    std::cout << val << std::endl;
    std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
