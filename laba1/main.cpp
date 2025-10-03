#include <iostream>

#include "../include/header.h"

int main () {
  int num_1, num_2;

  cout << "First Number ";
  cin >> num_1;

  cout << "Second number ";
  cin >> num_2;

  int result = nod(num_1, num_2);
  cout << result << endl;

  return 0;
}
