#include <iostream>
void food(void);
int main(void)
{
  // using namespace std;
  // cout << "The message is: ";
  // cout << "Be the best at what you do.";
  // cout << "=>Yea, I\'ll do my best";
  // cout << endl;
  // //comparison:
  // cout << "This is text_1\n";
  // cout << "This is text_2" << endl;
  // cout << "The helping value";
  food();
  //as seen from the output, the \n and endl are the same for cout
  return 0;
}
//food processing function:
void food(void)
{
  using namespace std;
  int carrots = 14;
  cout << "I have " << carrots << " carrots." << endl;
  cout << "Crunch, crunch, crunch. Now I have " << --carrots << " carrots" << endl;
}