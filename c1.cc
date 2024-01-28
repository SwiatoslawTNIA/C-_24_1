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
void display_formats(void);
void enter_char(void);
void compare_int_char(void);
void chars_1(void);
void intern_chars(void);
void bools(void);
void floats_1(void);
void number_overflow(void);
void division(void);
void pounds_to_stone(void);
void convertion(void);
void ex_1(void);
void ex_2(void);
void ex_3(void);
void ex_4(void);
void ex_5(void);
void ex_6(void);
void ex_7(void);

int main(void)
{
  ex_7();

  return 0;
}
void ex_7(void)
{
  float liters_per_100_km = 0.0F;
  double one_mile_fuel_consumption = 0.0, gallons_consumption = 0.0, gallon_distance_km = 0.0,
  miles_per_gallon = 0.0;
  cout << "Enter an automobile gasoline consumption figure in format l/100km:";
  cin >> liters_per_100_km;
  //convert to miles per gallon:
  //the total is 100 km in liters_per_100_km liters;
  gallons_consumption = liters_per_100_km / 3.875;//gallons per 100km;
  miles_per_gallon = 62.14 / gallons_consumption;//now we find how many km we do in 1 gallon;
  cout << "The consumption is: " << miles_per_gallon << " miles/gallon.";
}
void ex_6(void)
{
  double kilometers = 0.0, liters = 0.0, consumption = 0.0;
  cout << "How many kilometers have you driven?";
  cin >> kilometers;
  cout << "How many liters have you spent?";
  cin >> liters;
  consumption = liters / kilometers * 100;//consumption per 1 kilometer in percents
  cout << "The consumtion of your vehicle is: " << consumption << " l/100km";
}
void ex_5(void)
{
  unsigned long long population = 0ULL, country_population = 0ULL;
  long double difference = 0.0L;
  cout << "Enter the world's population: ";
  cin >> population;
  cout << "Enter the population of the US: ";
  cin >> country_population;
  //compute the percentage:
  difference = (long double)country_population / population * 100;
  cout << "The population of the US is " << difference << " of the world's population";
}
void ex_4(void)
{
  unsigned long long value = 0;
  long days = 0;
  int hours = 0, minutes = 0, seconds = 0, temp = 0;
  cout << "Enter the number of seconds: ";
  cin >> value;
  //an algorithm to compute days;
  //1 hour = 3600 seconds; 1 day = 86400s; 
  //find the amount of days:
  days = value / 86400;//we are counting in int, so all fractional parts are discarded
  temp = value - days * 86400;
  hours = temp / 3600;
  temp = temp - hours * 3600;// the remaining after the hours were counted
  minutes = temp / 60;
  temp = temp - minutes * 60;
  seconds = temp;
  cout << value << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, "
  << seconds << " seconds.";
}
void ex_3(void)
{
  int degrees = 0, minutes = 0, seconds = 0;
  double coord = 0.0, min = 0.0, sec = 0.0;
  cout << "Enter a latitude in degrees, minutes, and seconds:\nFirst, enter the degrees:";
  cin >> degrees;
  cout << "\nNext, enter the minutes of arc:";
  cin >> minutes;
  cout << "\nFinally enter the seconds of arc:";
  cin >> seconds;
  //convertion: 
  coord += degrees;//add the degrees;
  //convert minutes to 100:.xx:
  min = minutes / 60.0;//the minutes will be converted to double
  sec = seconds / 3600.0;//the seconds will be converted to double
  coord += min + sec;
  cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds  = "
  << coord << " degrees";
}

void ex_2(void)
{
  int weight = 0, feet = 0, inches = 0, inches_total = 0;
  double height = 0.0, meters = 0.0, kilograms = 0.0, bmi = 0.0;//defined height in float;
  cout << "Please enter your height: " << endl;
  cin >> height;
  //calc the inches and feet:
  feet = height;//convert float to int, by leaving everthing after the floating point
  inches = 10 * (height - feet);
  cout << inches;
  inches_total = inches + feet * 12;
  meters = inches_total * 0.0254;
  cout << "Please enter your weight in pounds: " << endl;
  cin >> weight;
  kilograms = weight / 2.2;//weight is converted to double, 
  bmi = kilograms / (meters * meters);
  cout << "Your BMI is: " << bmi << endl;
}
void ex_1(void)
{
  const int BASE = 12;
  int inches = 0, feet = 0, remainder = 0;
  cout << "Please enter the height in inches: ";
  cin >> inches;
  feet = inches / BASE;
  remainder = inches % BASE;
  cout << "You height is: " << feet << " feet and " << remainder << " inches.";
}
void convertion(void)
{
  cout.setf(ios_base::fixed, ios_base::floatfield);
  float num = 4;//int converted to float
  int d(5.44324);//double converted to int
  // int debt = 7.2E12;//the result is undefined, displays an error
  cout << "NUM: " << num << endl;
  cout << "D: " << d << endl;
  // cout << "Debt: " << debt << endl;
}
void pounds_to_stone(void)
{
  int pounds = 0, stones = 0, remainder = 0;
  cout << "Enter the amount of pounds: ";
  cin >> pounds;
  stones = pounds / 14; //int / int = int
  remainder = pounds % 14;
  cout << "The converted values are: " << stones << " stones";
  if(remainder > 0)
  {
    cout << ", and the rimainder: " << remainder << " pounds.";
  }
  else
  {
    cout.put('.');
  }
}
void division(void)
{
  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout << "Integer division: 9/5: " <<  9 / 5 << endl;
  cout << "Floating-point division: 9.0 / 5.0: " <<  9.0 / 5.0 << endl;
  cout << "Mixed-point division: 9.0 /5: " <<  9.0 / 5.0 << endl;
  cout << "float consts: 1e7f/9.0f: " <<  1e7f / 9.0f << endl;
}

void number_overflow(void)
{
  long double num = 1.3e+23L;
  long double num_2 = num + 1.0L;
  cout << "The difference between num_2 and num is " << num_2 - num << " >shocking ..." << endl;
  //float is capable of holding appr. 13

}
void floats_1(void)
{
  cout.setf(ios_base::fixed, ios_base::floatfield);//fixed-point
  float tub = 10.0 / 3.0; //good about 6 places
  double mint = 10.0 / 3.0; //good to about 13 places
  const float million = 1.0e+6;

  cout << "Tub: " << tub;
  cout << ", a million tubs: " << tub * million;
  cout << ", and ten million tubs: " << 10 * million * tub << endl;
  
  cout << "and mints: " << mint << "a million mints: " << million * mint << endl;

}
void bools(void)
{
  bool value = false;
  bool opp = true;
  //the literals false and true can be converted to type int:
  int truth = true;
  int falsity = false;
  cout << "Falsity: " << falsity << ", truth: " << truth << endl;
  cout << "Falsity: " << value << ", truth: " << opp << endl;
  //consts:
  const int age = 19;
  cout << "My age is " << age;
  // age--;//error, the years are GONE!! Utilize the time that is left!!! by maximum!!!
}
void intern_chars(void)
{
  cout << "Try this: \u00AA \u00BC \u014A";
  cout << endl << "The wchar_t type on the sys is " << sizeof(wchar_t) * 8 << " bits long";
  long result = pow(2, sizeof(wchar_t) * 8) - 1;
  cout << endl << "This gives us " << result << " possible characters" << endl;
  // a wide character string and wide character constant:
  // wchar_t ch = L'A';//the char input and output works without specifying the format L
  // wchar_t str[] = L"Tall";
  // wcout << str;
  char16_t ch = u'B';//an unsigned char 16 bits long, 
  char32_t ch_2 = U'C';//an unsigned char 32 bits long.
  cout << "char16_t var: " << ch << endl;
  cout << "char32_t var: " << ch_2 << endl;
}
void chars_1(void)
{
  cout << "Operation \"HyperHype\" activated.\n";
  cout << "Enter your agent code: _______\b\b\b\b\b\b\b";
  long code = 0;
  cin >> code;
  cout << "You've entered " << code << "code..." << endl;
  cout << "Code verified. Proceed with plan A";
}
void compare_int_char(void)
{
  char c = 'm';
  int i = c;//store the numerical value in char in a var of type int
  cout << "The ASCII code for the character " << c << " is " << i << endl;
  i = ++c;//add 1 to the numerical 
  cout << "The ASCII code for the character " << c << " is " << i << endl;
  //determine the char code of '5':
  char a = '5';
  int b = a;
  cout << b;
  cout.put(c);
  cout.put('!');
  char z = '\a';//an alarm
  cout.put(z);
  cout << "Don't do that again. Hacker??" << endl;

}
void enter_char(void)
{
  char c;
  cout << "Enter the character: " << endl;
  cin >> c;
  cout << "Thanks for your character \"" << c << "\", I appreciate it.";
}
void display_formats(void)
{
  int n1 = 42, n2 = 42, n3 = 42;
  cout << "The formats of the same nums are the following:" << endl;
  cout << "Decimal: " << n1 << endl;
  cout << hex << "Hexadecimal: " << n2 << endl;
  cout << oct << "Octal: " << n3 << endl;
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