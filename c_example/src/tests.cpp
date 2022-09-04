#include <cassert>
#include "submodule.hpp"

void test_concat_function(){
    assert(concat_function("a", "b") == "ab");
}

void test_failed(){
    assert(concat_function("a", "b") == "a b");
}

int main(){
    test_concat_function();
    test_failed();
    return 0;
}