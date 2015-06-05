// non-member operator overloads
#include <iostream>
#include "vector1.h"
using namespace std;


int main () {
  CVector foo (3,1);
  CVector bar (1,2);
  CVector result, result2;
  int result3;
  bool result4;


  result = foo + bar;
  cout << "Suma wektorow: \n";
  cout <<"(" << foo.x << ", " << foo.y << ") + " <<"(" << bar.x << ", " << bar.y << ") = (" << result.x << ", " << result.y << ")\n\n";

  result2 = foo - bar;
  cout << "Roznica wektorow: \n";
  cout <<"(" << foo.x << ", " << foo.y << ") - " <<"(" << bar.x << ", " << bar.y << ") = (" << result2.x << ", " << result2.y << ")\n\n";

  result3= foo * bar;
  cout << "Iloczyn skalarny wektorow: \n";
  cout <<"(" << foo.x << ", " << foo.y << ") * " <<"(" << bar.x << ", " << bar.y << ") = " << result3 << "\n\n";

  result4 = (foo |= bar);
  cout <<"Wektory (" << foo.x << ", " << foo.y << ") i " <<"(" << bar.x << ", " << bar.y <<")";
  if(result4) {
      cout << " sa prostopadle\n";
  } else {
      cout << " NIE sa prostopadle" << "\n\n";
  }

  return 0;
}
