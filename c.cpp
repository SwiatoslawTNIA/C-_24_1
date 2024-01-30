#include <iostream>
void loops(void);
#define ARRSIZE 16
void calculate_factorials(void);
void strings_1(void);
using namespace std;
int main(void)
{
  strings_1();
  return 0;
}
void strings_1(void)
{
  double arr[] = {124.4, 12.4, 23.4};
  double *p = arr;
  double value = *p++;//I think the value should be 125.4
  cout << value;
  // string word;
  // cout << "Enter a word to reverse: ";
  // cin >> word;//the size scales automatically
  // for(int i = word.size() - 1; i >= 0; i--) 
  // {
  //   cout.put(word[i]);//we're printing at the last iteration i-1  character of the array.
  // }
  // int x = 3;
  // x = 2 * x++ * (3 - ++x);//-12
  // cout << x;
}
void calculate_factorials(void)
{
  unsigned long long arr[ARRSIZE];
  //calculate the first 16 ints of factorial:
  arr[0] = arr[1] = 1;
  for(int i = 2; i <= ARRSIZE; ++i)
  {
    arr[i] = i * arr[i - 1];//the currect is previous times current;
  }
  for(int i = 0; i < ARRSIZE; ++i)
  {
    cout << "\n" << arr[i];
  }
  printf("\n");
}
void loops(void)
{
  for(int i = 0; i < 10; ++i)
  {
    cout << "Hi, this is :" << i << "\n";
  }
}