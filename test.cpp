// setprecision example
#include <bits/stdc++.h>
using namespace std;
int main () {
  double f =3.14159;
  std::cout << std::setprecision(2) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  std::cout << std::fixed;
  std::cout << std::setprecision(5) << f << '\n';
  std::cout << std::setprecision(9) << f << '\n';
  return 0;
}