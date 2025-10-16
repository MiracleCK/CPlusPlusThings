#include <cstring>
#include <iostream>

int main() {
    const char *s = "hello";
    char *sPtr = new char[strlen(s) + 1];  // 分配空间
    strcpy(sPtr, s);  // 更简单：用 strcpy 会自动复制 \0
    // 或者用 strncpy 并手动补 \0：
    // strncpy(sPtr, s, strlen(s));
    // sPtr[strlen(s)] = '\0';  // 手动添加字符串结尾

    std::cout << sPtr << std::endl;

    delete[] sPtr;  // ✅ 用 delete[] 释放数组

    return 0;
}
