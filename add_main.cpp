#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include   <time.h>
#include <random>
#include <thread>
#include <algorithm>

using namespace std;


//正常的函数实现
int add1(int a, int b)
{
  return a + b;
}

//类的运算符重载实现
class ADD
{
public:
  int operator()(int a, int b)
  {
    return a + b;
  }
};

//模板实现
template<typename T1, typename T2>
auto add3(T1 a, T2 b) -> decltype(a + b)
{
  return a + b;
}

//lambda表达式实现
auto add4 = [](int a, int b) -> int 
{
  return a + b;
};

int main()
{
  ADD add2;
  cout << add1(3,4) << endl;
  cout << add2(3,4) << endl;
  cout << add3(3,4) << endl;
  cout << add4(3,4) << endl;
  return 0;
}