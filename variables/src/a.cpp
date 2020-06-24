#include <iostream>

#define STRIMPL(X) #X
#define STR(X) STRIMPL(X)

void foo() {
    std::cout << "MY_OPTION " STR(MY_OPTION) "\n";;
}
