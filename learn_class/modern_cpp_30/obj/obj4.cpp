#include <iostream>
#include <cstdlib>

using namespace std;

class A {
public:
  A() { cout << "Create A\n"; }
  ~A() { cout << "Destroy A\n"; }
  A(const A &) { cout << "Copy A\n"; }
  A(A &&) = delete;  // 坚持删除移动构造
};

// 使用输出参数避免返回值问题
void getA_duang(A& result) {
  A a1;
  A a2;
  if (rand() > 42) {
    result = a1;  // 使用拷贝赋值
  } else {
    result = a2;  // 使用拷贝赋值
  }
}

int main() { 
  srand(time(nullptr));
  A a;
  getA_duang(a); 
  return 0;
}