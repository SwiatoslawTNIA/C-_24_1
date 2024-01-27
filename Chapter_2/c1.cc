#include <iostream>
#include <cmath>
//Primer ++, CHAPTER II
using namespace std;
void f2(void);
void stone(void);
void ex1(void);
void ex2(void);
void print1(void);
void print2(void);
void ex3(void);
void ex4(void);
void ex5(void);
void ex6(void);
void display_date(int hours, int minutes);
void ex7(void);

int main(void)
{
  ex7();
  return 0;
}
void ex7(void)
{
  int minutes = 0, hours = 0;
  cout << "Enter the number of hours: ";
  cin >> hours;
  cout << "Enter the number of minutes: ";
  cin >> minutes;
  display_date(hours, minutes);
}
void display_date(int hours, int minutes)
{
  cout << "Time: " << hours << ":" << minutes << endl;
}
void ex6(void)
{
  double light_years = 0, light_years_copy = 0;
  cout << "Enter the number of light years: ";
  cin >> light_years;
  light_years_copy = light_years;
  //convert:
  light_years = light_years * 63240;
  cout << light_years_copy << " light years = " << light_years << " astronomical units." << endl;

}
void ex5(void)
{
  double copy = 0, input = 0;
  cout << "Please enter a Celsius value: ";
  cin >> input;
  copy = input;
  //convert:
  input = input * 9 / 5 + 32;
  cout << copy << " degrees Celsius is " << input << " degrees Fahrenheit." << endl;

}
void ex4(void)
{
  int years = 0;
  cout << "Please enter your age in years: \n > ";
  cin >> years;
  cout << "Your age in months: " << years*12 << endl;
}
void ex3(void)
{
  print1();
  print1();
  print2();
  print2();
}
void print1(void)
{
  cout << "Three blind mice" << endl;
}
void print2(void)
{
  cout << "See how they run" << endl;
}
void ex2(void)
{
  double furloughs = 0;
  cout << "Please enter the distance in furloughs:\n > ";
  cin >> furloughs;
  cout << "The distance in yards: " << furloughs * 220;
}
void ex1(void)
{
  cout << "James Morris";
}
void f2(void)
{
  //function computes the side of the given area of a square;
  double area = 0;
  cout << "Please enter the area of the square:\n> ";
  cin >> area;
  cout << "The side of the square is " << sqrt(area) << endl;
}
void stone(void)
{
  double value = 0;
  cout << "Please enter the weight in stones:\n > ";
  cin >> value;
  value *= 14;
  cout << "Your weight in kilograms is " << value << " pounds.";
}
void f1(void)
{
  unsigned long long int carrots = 0;
  cout << "How many carrots do you have?";
  cin >> carrots;
  cout << "Really, " << carrots << " carrots seams a lot" << endl;
}