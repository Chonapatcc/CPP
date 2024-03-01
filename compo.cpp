#include <iostream>
 
using namespace std;
 
int main () {
   char *cat;

   cat[0] = 'b';
   cat[1] = 'r';
   cat[2] = 'o';
    cat[3] = '\0';
   cout << cat;
}