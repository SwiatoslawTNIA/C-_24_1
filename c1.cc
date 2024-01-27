#include <iostream>
#include <cmath>
#include <climits>
#define ZERO 0
#define PI 3.14
using namespace std;
void printSizes(void);
void printSizes2(void);
void defineVars(void);
void exceed_value(void);

int main(void)
{
  exceed_value();
  return 0;
}
void exceed_value(void)
{
  unsigned short account_1 = SHRT_MAX;
  short account_2 = SHRT_MAX;
  cout << "Account 1: " << account_1++ << ", account 2: " << account_2++ << endl;
  cout << "Account 1: " << account_1-- << ", account 2: " << account_2-- << endl;
  cout << "Account 1: " << account_1 << ", account 2: " << account_2 << endl;
}
void defineVars(void)
{
  //all the declarations below, are valid, confirmed;
  //the preprocessor directives can be used w
  // unsigned short v1 = 0;
  // unsigned int v2 = 0;
  // unsigned long v3 = 0;
  // unsigned long long v4 = 0;

  long long s_num = 10;
  long long s_num_1(10);
  long long s_num_2 = {10};
  long long s_num_3{10};
  cout << s_num << ":" << s_num_1 << ":" << s_num_2 << ":" << s_num_3 << endl;
  //initialize values to 0;
  long long s_num_4 = 0;
  long long s_num_5{};
  long long s_num_6 = {};
  cout << s_num_4 << ":" << s_num_5 << ":" << s_num_6  << endl;


}
void printSizes(void)
{
  cout << "The size of short is: " << sizeof(short) << " bytes" << endl;
  cout << "The size of int is: " << sizeof(int) << " bytes" << endl;
  cout << "The size of long is: " << sizeof(long) << " bytes" << endl;
  cout << "The size of long long is: " << sizeof(long long) << " bytes" << endl;
}
void printSizes2(void)
{
  //initialize the maximum sizes on the system:
  int integer = INT_MAX;
  short short_integer = SHRT_MAX;
  long long_integer = LONG_MAX;
  long long long_long_integer = LLONG_MAX;
  cout << "The size of short is: " << sizeof(short_integer) << " bytes" << endl;
  cout << "The size of int is: " << sizeof(integer) << " bytes" << endl;
  cout << "The size of long is: " << sizeof(long_integer) << " bytes" << endl;
  cout << "The size of long long is: " << sizeof(long_long_integer) << " bytes" << endl;
}