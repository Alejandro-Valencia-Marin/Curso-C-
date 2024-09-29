#include <iostream>
using namespace std;

int main()
{
    //en las arrays inician en el 0
    //int edad [5] = {19, 20 , 56 , 34, 25};
    //for (int i = 0; i < 5; i++)
    //{
    //    cout << edad [i] << endl;
    //}

    //esta array es por scaner
    int array[8];
    for (int  i = 0; i < 8; i++)
    {
        cout << "posicion" << i << ":"; 
        cin >> array[i];
    }
       cout << "Contenido de mi array";
    for (int  i = 0; i < 8; i++)
    {
       cout << array[i] << " ";
    }

 // tambien se puede poner textos 

 char texto[8] ;
 cout << "ingrese su texto";
 cin >> texto;
 cout << "datos del texto" << texto << endl;

    return 0;
}
