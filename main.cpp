/* Adam Chisolm
 * 27 November 2017
 * File: main.cpp
 * Description:
 *    This is a simple "hello world" funcion to practice git.
 */

#include <iostream>
using namespace std;

int sum(int num);
int product(int num);

int main()
{
  int n;
  
  cout << "Enter a number: " << endl;
  cin >> n;
  cout << sum(n) << endl;
  cout << product(n) << endl;

  return 0;
}

int sum(int num)
{
  int total = 0;

  for (int i = 1; i <= num; ++i) {
    total += i;
  }

  return total;
}

int product(int num)
{
  int total = 1;

  for (int i = 1; i <= num; ++i) {
    total *= i;
  }

  return total;
}
