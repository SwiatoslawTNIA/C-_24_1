#include <iostream>
#include <cmath>
#include <cstring>
#include <string>


void array(void);
void name(void);
void name1(void);
void check_getline(void);
void get_name(void);
void house(void);
void theStringClass(void);
void more(void);
void structs(void);
void enums(void);
void pointers(void);
using namespace std;

int main(void)
{
  // cout << sizeof(long double) << "--" << sizeof(long long);
  pointers();
  return 0;
}
void pointers(void)
{
  int value = 14;//a declaration:
  cout << "The address of the variable value is: " << &value << endl;
  //the basic usage of pointers in c++ is the same as in c:
  int *p = &value;
  cout << "The value of the pointer p is: " << *p;
  unsigned long long *memory = new unsigned long long int;
  //allocate memory for an unsigned long long int and get access to it through memory pointer;
  *memory = 11ULL;//11 must be of type unsigned long long int, even though it should be converted
  //by default, i'd still prefer that it would be converted later
  
}
//enums:
void enums(void)
{
  enum days {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
  //days is a name of a new type, MONDAY.. are enumerators
  days day1 = TUESDAY;
  //enums are ints
  // day1 = 2;//invalid
  day1 = days(2);//valid, used typecase
  day1 = days(24);//even though the output was 24, the result is undefined, because we cannot express the value
  //24 using our enumerators;(0-6) are valid versions, applicable for convertion.
  days day2 = days(45);
  cout << day2 << " ";

  cout << day1;
}
void structs(void)
{
  struct temp
  {
    char name[20];
    int value;
    double arr[20];
  };
  //create an array of structs:
  struct temp arr[100];
  //initializing a structure:
  struct temp guest[2] = 
  {
    {"James", 12, 4.3},
    {"Peter", 23, -5.4}
  };
  arr[34] = {"Charles", 12, 4232.12};
  //access the 35'th element's name:
  cout << arr[34].name << " is gonna be probably nothing." << endl;
  cout << "Name: " << guest[1].name << ", value: " << guest[1].value << ", arr: " << guest[1].arr[0];
  struct BitStruct 
  {
    unsigned int SN: 4;//4 bits for SN variable
    unsigned int : 4;//skip four bits
    bool good_value: 1;//1 bit for good_value var
    bool connected: 1;//1 bit for connected var
  };
  //create a new structure:
  struct BitStruct structure = {13, false, false};
  std::cout << structure.good_value;
  struct widget 
  {
    char brand[20];
    int type;//based on the type we determine the value stored inside the union:
    union id//id is either char string or a number
    {
      unsigned long long id;
      char ids[20];
    } id_val;
  };
  widget example1  = {"Macintosh", 1, 123123214ULL};
  cout << "The example values: " << example1.brand << example1.id_val.ids << endl;
  //what if a union has no name?
  struct widget1
  {
    char brand[20];
    int type;
    union //an anonymous union
    {
      unsigned long long id_num;
      char id_str[20];
    };
  } widgettt;
  if(widgettt.type == 1)
    cin >> widgettt.id_str;
  else 
    cin >> widgettt.id_num;
  // temp temp1 = {"John", 14, 0};//both declarations are valid in C++
  // struct temp temp2 = {"John", 14, 0};

}
void more(void)
{
  // wchar_t title[] = L"The title array";
  // char16_t n[] = u"Something";
  // char32_t p[] = U"Something else";

  //test the structure's assignment possibilities:
  struct inflatable 
  {
    char name[20];
    float weight;
    double price;
  };
  struct inflatable bouquet = {"Joannita", 3.144, 14.56}, copy;
  cout << "The bouquet: \n" << bouquet.name << " ---- price: " << bouquet.price << " -- weight: " << bouquet.weight;
  //assign structs:
  copy = bouquet;
  cout << "\nThe second bouquet: " << copy.name << "--- price: " << copy.price << " -- weight: " << copy.weight;

  char s[20] = {0};
  s[19] = '\0';
  string str;
  cout << "The length of s is : " << strlen(s) << endl << "The length of str: " << str.size();
  //get the input:
  cout << "enter a line of input: " << endl;
  cin.getline(s, 20);//store the data in the s char array
  cout << "Enter another line of input: " << endl;
  getline(cin, str);
  cout << "The lines that you typed are: " << endl << s << "\n" << str << endl;
}
void theStringClass(void)
{
  string s1, s2 = "penguin";
  char s_1[20], s_2[20] = "experiment";
  //assignment operations:
  s1 = s2;
  strcpy(s_1, s_2);
  //appending:
  strcat(s_1, " one");
  s1 += " one";
  //computing the length:
  int arr_length = strlen(s_1);
  int arr_l_c  = s1.size();
  cout << "The results are following: \n" 
  << "Char arr: " << s_1 << " and " << s_2 << " , length: " << arr_length << endl 
  << "String arr: " << s1 << " and " << s2 << " , length: " << arr_l_c << endl;

}
// void copy(char *s1, char *s2)
// {
//   int i = 0;
//   while(*(s2 + i) != '\0' && *(s1 + i) != '\0')
//     s1[i] = s2[i++];
  
// }
void house(void)
{
  string new_string;
  string str_2 = "panther";
  cout << str_2 << " and " << str_2[3] << "\n";
  int year = 0;
  char address[60];
  cout << "What year was your house built?";
  (cin >> year).get();//get the enter, that was left after the year integer.
  cout << "What is the address of that house?";//there is no need for a \n because we have entered \n
  //so the cursor moves to the next line
  cin.getline(address, 60);
  cout << "\nYear built: " << year << endl;
  cout << "Address: " << address << endl;
}
void get_name(void)
{
  char name[50], dessert[50];//stores 49 chars
  cout << "Enter your name: ";
  cin.get(name, 50).get();//read up to a new_line, and then get that new_line with the second call to get()
  cout << "\nEnter your dessert: ";
  cin.get(dessert, 50).get();
  cout << "I have some delicious dessert " << dessert << " for you, " << name;
}
void check_getline(void)
{
  cout << "Type";
  char name[50];
  cin.getline(name, 40);
  cout << endl << "The sizeof: " << sizeof(name) << " and the strlen: " << strlen(name);
}
void name1(void)
{
  // const int arr_size = 20;
  // char name[arr_size] = {0}, dessert[arr_size] = {0};
  // cout << "Enter your name\n";
  // cin >> name;
  // cout << "Enter your favorite dessert: \n";
  // cin >> dessert;
  // cout << "I have some delicious dessert " << dessert << " for you, " << name << endl;
  //the corrected version:
  const int arr_size = 20;
  char name[arr_size] = {0}, dessert[arr_size] = {0};
  cout << "Enter your name\n";
  cin.getline(name, arr_size);
  cin.get(dessert, arr_size);

  // cin.get();
  cout << "Enter your favorite dessert: \n";

  cout << "I have some delicious dessert " << dessert << " for you, " << name << endl;

}
void name(void)
{
  char str1[15] = "Bob Marley";
  char str2[15];
  cout << "Hi. What is your name?: ";
  cin >> str2;
  cout << "Hi, " << str2 << endl;
  cout << "Your name consists of " << strlen(str2) << " letters." << endl;
  cout << "Your initials are :" << str2[0] << ".";
  cout << "Here is my name:";
  cout << str1;
}
void array(void)
{
  //initializing an array:
  char array[10] = "Length";//a string of length 10 with string literal of length 6
  cout << array[4] << " ";
  cout.put(array[0]);
  cout << endl << "The size of the created array is: " << sizeof(array) << endl;
  cout << "An ex"
  "periment";
}