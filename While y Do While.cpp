#include <iostream>
using namespace std;
int main()
{
 int n, c=1, limite;
 cout << "Introduzca la tabla que desea ver";
 cin >> n;
 cout << "Intruduzcame el limite";
 cin >> limite;
 while (c <= limite)
 {
   cout << n * c << " ";
   c++;
 }

 //Do while (el codigo de arriba hehco con di while)

 do
 {
  cout << n*c;
  c++;
 } while (c <=limite);
 













    return 0;
}
