#include <stdio.h>
using namespace std;

#include <gmp.h>

int main()
{
  mpz_t a,b,x;

  mpz_init(a);
  mpz_init(b);
  mpz_init(x);

  long double x1,x2;
  scanf("%lf %lf",&x1,&x2);

  mpz_set_ui(a,x1);
  mpz_set_ui(b,x2);


  mpz_add(x,a,b);

  gmp_printf("%Zd +%Zd = %Zd",a,b,x);

    

  

}