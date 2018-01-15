/*

Programa em C++ que tem uma funcao que passa valores por referencia e calcula Bhaskara.
A formula de Bhaskara serve para determinar as solucoes da equacao do segundo grau a partir de seus coeficientes.

4-8-17

*/

#include<iostream>
#include<cmath>
using namespace std;

void bhaskara(float a, float b, float c, float &delta, float &x1, float &x2);

int main(){
	float num1, num2, num3,del,raiz1,raiz2;
	cout<<"\nDigite um num: ";cin>>num1;
	cout<<"\nDigite um num: ";cin>>num2;
	cout<<"\nDigite um num: ";cin>>num3;

	bhaskara(num1,num2,num3,del,raiz1,raiz2);

	if(del<0)
		cout<<"\nDelta menor que zero nao tem raiz. ";
	else
		if(del==0)
			cout<<"\nTem uma raiz "<<raiz1;
		else
			if(del>0)
				cout<<"\nDuas raizes: "<<raiz1<<" e "<<raiz2;

	return 0;
}

void bhaskara(float a,float b,float c,float &delta,float &x1,float &x2){
	delta=pow(b,2)-4*a*c;
	x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
}
