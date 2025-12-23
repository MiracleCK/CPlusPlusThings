/* 条件编译演示.cpp */
#include <iostream>

// 定义一些控制宏
#define DEBUG_MODE 1
#define FEATURE_A 1
#define FEATURE_B 0
#define VERSION 3
#define COMMENT 0

int main()
{
    std::cout << "=== 条件编译各种用法 ===" << std::endl;

// 1. 基本的 #if #elif #else #endif
#if VERSION == 1
    std::cout << "运行版本 1" << std::endl;
#elif VERSION == 2
    std::cout << "运行版本 2" << std::endl;
#else
    std::cout << "运行其他版本" << std::endl;
#endif

// 2. 功能开关
#if FEATURE_A
    std::cout << "功能 A 已启用" << std::endl;
#endif

#if FEATURE_B
    std::cout << "功能 B 已启用" << std::endl;
#else
    std::cout << "功能 B 未启用" << std::endl;
#endif

// 3. 调试代码
#if DEBUG_MODE
    std::cout << "[DEBUG] 调试信息：程序运行正常" << std::endl;
#endif

// 4. 注释大段代码（比 /* */ 更好）
#if COMMENT
    std::cout << "这段代码被注释掉了" << std::endl;
    int x = 10;
    x = x * 2;
    std::cout << "x = " << x << std::endl;
#endif

// 5. 嵌套条件编译
#if defined(DEBUG_MODE)
#if DEBUG_MODE > 0
    std::cout << "[DEBUG] 详细调试模式" << std::endl;
#endif
#endif

// 6. 检查宏是否定义
#ifdef FEATURE_A
    std::cout << "FEATURE_A 已定义" << std::endl;
#endif

#ifndef FEATURE_C
    std::cout << "FEATURE_C 未定义" << std::endl;
#endif

    return 0;
}
