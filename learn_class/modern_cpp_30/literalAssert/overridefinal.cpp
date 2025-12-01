#include <iostream>

class A {
public:
  virtual void foo() { std::cout << "A::foo()" << std::endl; }
  virtual void bar() { std::cout << "A::bar()" << std::endl; }
  void foobar() { std::cout << "A::foobar()" << std::endl; }
};

class B : public A {
public:
  void foo() override { std::cout << "B::foo()" << std::endl; }       // OK
  void bar() override final { std::cout << "B::bar() final" << std::endl; } // OK
};

class C final : public B {
public:
  void foo() override { std::cout << "C::foo()" << std::endl; } // OK
  // void bar() override { }  // 错误：B::bar()是final
};

// class D : public C { };  // 错误：C是final类

int main() {
    B b;
    C c;
    A* ptr = &c;
    
    ptr->foo();  // 输出: C::foo() - 多态调用
    ptr->bar();  // 输出: B::bar() final - 被final锁定
    
    return 0;
}