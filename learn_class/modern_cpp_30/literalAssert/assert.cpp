#include <cassert>
#include <iostream>

int main() {
    const int alignment = 4;  // 改为2的幂：1,2,4,8,16...
    assert((alignment & (alignment - 1)) == 0);
    static_assert((alignment & (alignment - 1)) == 0,
                  "Alignment must be power of two");
    std::cout << "Alignment " << alignment << " is valid (power of two)" << std::endl;
    return 0;
}
