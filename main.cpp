/* Adam Chisolm
 * 27 November 2017
 * File: main.cpp
 * Description:
 *    This is a simple "hello world" funcion to practice git.
 */

#include <iostream>
using namespace std;

int sum(int num);

int main()
{
  int n;
  
  cout << "Enter a number: " << endl;
  cin >> n;
  cout << sum(n) << endl;

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
