#include <iostream>
#include <cstring>
#include <ctime>
void loops(void);
#define ARRSIZE 16
void calculate_factorials(void);
void strings_1(void);
void scope(void);
void wait_5_sec(void);
void input_1(void);
void temp(void);
using namespace std;

void ex_1(void);
void ex_3(void);
void ex_4(void);
void ex_5(void);
void ex_6(void);
void ex_7(void);
void ex_9(void);
void ex_10(void);

int main(void)
{
  ex_10();
  return 0;
}
void ex_10(void)
{
  int rows = 0, dots = 0, asterisks = 1;
  cout << "Enter number of rows: ";
  cin >> rows;
  dots = rows - 1;
  for(int i = 0; i < rows;++i)//move through each row
  {
    //print the dots:
    for(int dot = 0; dot < dots; ++dot)
    {
      cout << ".";
    }
    //print the asterisks:
    for(int asterisk = 0; asterisk < asterisks; ++asterisk)
    {
      cout << "*";
    }//udpate the values:
    cout << "\n";
    dots--, asterisks++;
  }
}
void ex_9(void)
{
  string word, key = "done";//the max length of the word is 19 chars
  bool done = false;
  int words = 0;
  while(!done)
  {
    bool same = true;
    cin >> word;//it skips through the spaces
    if(word.size() != key.size() || word != key)
      same = false;
    //check
    words++;//the word done is included
    if(same == true)
    {
      done = true;
      cout << "You've entered a total of " << words << " words.";
    }
  }
}
void ex_7(void)
{
  char word[20], key[] = "done";//the max length of the word is 19 chars
  bool done = false;
  int words = 0;
  while(!done)
  {
    cin >> word;
    //compare the word with "done":
    bool same = true;
    size_t length =  strlen(word);
    if(length != strlen(key))
      same = false;
    for(int i = 0;i < (int)length && same;++i)
    {
      if(key[i] != word[i])
        same = false;
    }
    words++;//the word done is included
    if(same == true)
    {
      done = true;
      cout << "You've entered a total of " << words << " words.";
    }
  }
}
void ex_6(void)
{
  int amount_to_catalogue = 0;
  typedef struct 
  {
    char name[40];
    int built_year;
  } Car;
  cout << "How many cars to catalog?";
  cin >> amount_to_catalogue;
  cin.get();//get the '\n'
  Car *cars = new Car[amount_to_catalogue];
  for(int i = 0; i < amount_to_catalogue;++i)
  {
    cout << "Car #" << i + 1 << ":\n";
    cout << "Please enter the make: ";
    cin.get(cars[i].name, 40);
    cin.get();//get the next char ('\n')
    cout << "Please enter the year made: ";
    cin >> cars[i].built_year;
    cin.get();//get the \n
  }
  //display the cars;
  cout << "Here is your collection: \n";
  for(int i = 0; i < amount_to_catalogue; ++i)
  {
    cout << cars[i].built_year << " " << cars[i].name << "\n";
  }
  //free the memory:
  delete [] cars;
}
//exercise 2 is boring
void ex_5(void)
{
  const char *months[12] = 
  {
    "January", "February", "March", "April", "May", 
    "June", "July", "August", "September", "October", "November", "December"
  };
  double sales[3][12], total = 0;
  for(int years = 0; years < 3;++years)
  {
    cout << "Enter the sales for the year " << years + 1 << endl; 
    for(int i = 0; i < 12; ++i)
    {
      cout << "Please enter the sales for " << months[i] << " : ";
      cin >> sales[years][i];
      total += sales[years][i];
    }
  }
  
  cout << "The total sales are " << total;
}
void ex_4(void)
{
  double daphnie_balance = 100, cleo_balance = 100, investment_percent = 0.1;
  int years = 0;
  while(daphnie_balance >= cleo_balance)
  {
    daphnie_balance += 100 * investment_percent;
    cleo_balance += cleo_balance * investment_percent / 2;
    years++;//it takes 27 years!!!
  }
  printf("It takes: %d", years);
}
void ex_3(void)
{
  int total = 0, input = 0;
  bool done = false;
  while(!done)
  {
    cout << "Enter the next num: ";
    cin >> input;
    total += input;
    cout << "Total sum is: " << total << endl;
    if(input == 0)
      done = true;
  }
}
void ex_1(void)
{
  int int_1  = 0, int_2 = 0, sum = 0;
  cout << "Enter the first integer: " << endl;
  cin >> int_1;
  cout << "Please, enter the second integer" << endl;
  cin >> int_2;
  //what integer is bigger, what is lower:
  int bigger = int_1 > int_2 ? int_1 : int_2;
  if(bigger == int_1)
  {
    for(int i = int_2; i <= int_1;++i)
    {
      sum += i;
    }
  }
  else
  {
    for(int i = int_1; i <= int_2; ++i)
    {
      sum +=i;
    }
  }
  cout << "The sum of the numbers is: " << sum;
}
void temp(void)
{
  for(int i = 1; i <= 64; i *= 2)
    cout << i << " ";
}
void input_1(void)
{
  // int count = 0;
  // char c;
  // cin >> c;
  // while(c != '#')
  // {
  //   cout << c;
  //   ++count;
  //   cin >> c;
  // }
  // cout << "Chars_num: " << count;
  //using cin.get(char):
  int count = 0;
  char c;
  cin.get(c);
  // while(c != '#')
  // {
  //   cout << c;
  //   count++;
  //   cin.get(c);//get the next character
  // }
  //the third version of the code:
  while((c = cin.get()) != EOF)//basically almost the same as in c
  // while((c = getchar()) != EOF)
  {
    //test to see if cin.get() reads a new_line:
    if(c == '\n')
      printf("Yes, it reads a \\n");
    cout << c, count++;

  }
  cout << "The total char count is: " << count;
}
void wait_5_sec(void)
{
  float num = 0.0F;
  cout << "Enter the amount of seconds to wait: ";
  cin >> num;
  cout << "Starting...";
  cout << CLOCKS_PER_SEC;
  clock_t delay = num * CLOCKS_PER_SEC;
  while(clock() - num < delay)
    ;
  cout << "Done.";
  //typedefs work the same in C++ as in C;
  typedef char ** unknown;
  char chars[] = {'a', 'b'};
  char *p = chars;
  unknown pp = &p;
  cout << *(*pp + 1);//-> b
  //let's try some loops:
  double arr[] = {42.3, 234.12, 234.5, 6566, 76.5};
  //a new type of loop(essentially the same loop as a for loop):
  for(double x: arr)
    cout << x << endl;//print every single char in the array arr
  //the sytanx above doesn't allow that we change the value inside a loop, so
  for(double &x: arr)
  {
    x *=2;
  }
  for(int i = 0; i < 5;++i)
  {
    fprintf(stdout, "%.2f ", arr[i]);
  }
}
void scope(void)
{
  //test the scope of the variable:
  int x = 5;
  cout << x << endl;//5
  {
    cout << x << endl;
    int x = 10;//define a new var
    cout << x << endl;//10
  }
  //print the old value again:
  cout << x << endl;//5
  if(x < 5)
  {
    fprintf(stdout, "Something");
  }
  else
    printf("%d\n", x);
  
  string str = "!ate";
  for(char c = 'a'; str != "mate";++c)
    str[0] = c;

  cout << "Afterwards: " << str;
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