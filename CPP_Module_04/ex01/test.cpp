#include <iostream>
using namespace std;
 
int main()
{
    int x = 5;
    int g= 6;
   int*const i = &x; /* you can't change the adriss */
   //const int* i = &x; /* you can't change the value */
  // const int* const i = &x;  /* you can't the adriss and the value of the pointer */
    *i = x;
   // i = &g;
    cout << *i ;
    return 0;
}
