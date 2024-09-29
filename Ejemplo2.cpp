 #include <iostream>
 using namespace std;
 int main(){
 double nota1, nota2, nota3, resultado; 
 cout << "ingresa la primera nota ";
 cin >> nota1; 
 cout << "ingresa nota 2: "; 
 cin >> nota2; 
 cout << "ingresa nota 3: "; 
 cin >> nota3; 
 resultado = (nota1+nota2+nota3)/3;
 cout << "El resultado de el promedio de las notas es: " << resultado; 

 return 0;    
 }