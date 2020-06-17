// Title: gdb And How To Debug C And C++ Code?
// Author: CppNuts
// Agenda: explain few commands: next, step, continue, bps, bt, frame, info..

#include <iostream>

void fun3()
{
    int fun3_var = 25;
    std::cout << fun3_var << "\n";
}

void fun2()
{
    int fun2_var = 20;
    std::cout << fun2_var << "\n";
    fun3();
}

void fun1()
{
    int fun1_var = 15;
    std::cout << fun1_var << "\n";
    fun2();
}

int main()
{
    int main_var = 10;
    std::cout << main_var << "\n";
    fun1();
    return 0;
}
