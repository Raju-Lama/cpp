#include <iostream>

#define MAN
//contitional compilation, if the condiction is met, only the codes are compiled.
int main()
{
#ifdef MAN//since the MAN is defined, it compiles
    std::cout << "This is compiled and output\n";
#endif

#ifdef WOMAN
    std::cout << "This text is never compiled haha,, this is just like a comment box" ;
#endif

#ifndef WOMAN
    std::cout << "This is compiled as this is not defined which is exactly opposite of #ifdef.\n";
#endif // WOMAN

#if 0//codes in betweens are never compiled, its like a comment for multi lines inside multiles.
    std::cout << "This is never compiled or printed.";
    /*
    *these are comments inside comment.
    *
    */
#endif // 0

#if 1
    std::cout << "These lines are now printed as it is used to test codes by compiling.\n";
    std::cout << "The lines are executable and included for compilation. \n";
#endif // 1
    return 0;
}
