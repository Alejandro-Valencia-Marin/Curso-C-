#include <iostream>
using namespace std; 

int mult(int, int);
int mult(float, int); 

int mult(int a, int b){
return a * b;
}

int mult(double x, int y){
return x * y;
}


int main()
{
 int f1 = mult(5 , 3);
 double f2 = mult(5.3 , 6);

 cout << " f1 es: " << f1 << endl; 
 cout << " f2 es: " << f2 << endl; 


    return 0;
}
