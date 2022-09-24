//Programa que presenta las operaciones basicas en un programa de c++
//Creado por Fausto Montaño
//curso: 1ro "B" TICS

#include<iostream>
using namespace std;

int main()
{
	float F,s,m,j,g,h;
	//Ingreso de datos
	cout<<"Ingrese en valor de f=:";
	cin>>F;
	cout<<"Ingrese en valor de s=:";
	//Operaciones 
	cin>>s;
	m=F+s;
	j=F*s;
	g=F/s;
	h=F-s;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<F<<" + "<<s<<" = "<<m<<endl;
	cout<<"Las multiplicacion de "<<F<<" * "<<s<<" = "<<j<<endl;
	cout<<"Las division de "<<F<<" / "<<s<<" = "<<g<<endl;
	cout<<"Las resta de "<<F<<" - "<<s<<" = "<<h<<endl;
	return 0 ;

}

//2022

