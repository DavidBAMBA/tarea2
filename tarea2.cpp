#include<iostream>
#include <cmath>
#include <iomanip>

void calculo1(double, double, double, int , double&, double&); //calcula la raiz con el metodo 1
void calculo2(double , double , double , int , double&, double&); //calcula la raiz con el metodo 2


int main(){
	double a=1.0, b=1.0, c=10;   //variables de la ecuacion
	double x1,x2,x3,x4,val;      //variables de las raices
	int n = 10;
	
	std::cout.precision(7); std::cout.setf(std::ios::scientific);  //imprime con presicion de 7 cifras decimales y en notacion cientifica
	std::cout<<"Valor C"<<std::setw(25)<<"X_1 Funcion 1"<<std::setw(20)<<"X_2 Funcion 1"<<std::setw(20)<<"X_1 Funcion 2"<<std::setw(20)<<"X_2 Funcion 2"<<"\n";
	for(int i = 1; i <= n; i++ ){
		//itera el valor de la potencia de C
		calculo1(a,b,c,i, x1, x2);
		calculo2(a,b,c,i,x3,x4);
		val=std::pow(c,i);   //valor de C para cada i
		
		std::cout<<val<<std::setw(20)<<x1<<std::setw(20)<<x2<<std::setw(20)<<x3<<std::setw(20)<<x4<<"\n"; //impresion de valores en pantalla

	}
	
	return 0;
}

void calculo1(double a, double b, double c, int n, double& x1,double& x2){

		x1 = (-b + std::sqrt( std::pow(b,2) - 4*a*std::pow(c,-n) )) / 2*a;
		x2 = (-b - std::sqrt( std::pow(b,2) - 4*a*std::pow(c,-n) )) / 2*a;

}
void calculo2(double a, double b, double c, int n, double& x1,double& x2){
	
		x1 = -2*c / (b + std::sqrt(std::pow(b,2) - 4*a*std::pow(c,-n) ));
		x2 = -2*c / (b - std::sqrt(std::pow(b,2) - 4*a*std::pow(c,-n) ));

}

