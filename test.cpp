#include <iostream>
using namespace std;


int main() {
  string str ("There are two needles in this haystack.");
  string str2 ("cat");

  cout << str.find(str2) <<endl;
  cout << string::npos;
}