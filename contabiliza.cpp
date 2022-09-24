//Programa que calcula el ingreso y el limite de un numero mediantye codigos c++
//Programa creado por Fausto Montaño
//vurso: 1ro"B" TICS 

#include<iostream>
using namespace std;

int main()
{
	int r=0,k;
	float g,j=0;
	cout<<"ingrese el limite k="; cin>>k;
	do
	
	{
		
	cout<<"ingrese el numero g="; cin>>g;
	r=r+1;
	j=j+g;



	}

	while (r<k);
	cout<<"Se ingresaron "<<k<<" numeros "<< "que sumaron "<<j<<endl;
	return 0;



}

//2022.

