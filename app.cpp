#include <iostream>
using namespace std;

class Calculator
{
public:
  int Calculate(int, int, char);
};

/* main entry point for application  */
int main()
{
  int x, y, result;
  char oper;

  /* greet and prompt user */
  cout << "Hello! I am a calculator!" << endl;
  cout << "Please enter num1 operator num2: " << endl;

  /* capture input and store in following order */
  cin >> x >> y >> oper;
  
  /* instantiate Calculator class and call method */
  Calculator c;
  result = c.Calculate(x, y, oper);
  cout << "Result is: " << result << endl;

  cin.ignore();
  cin.get();
  return 0;
};

int Calculator::Calculate(int x, int y, char oper)
{
  switch (oper)
  {
  case '+':
    return x + y;
  case '-':
    return x - y;
  case '*':
    return x * y;
  case '/':
    if (y != 0)
      return x / y;
  default:
    cin >> x >> oper >> y;
    Calculate(x, y, oper);
  };
}