/*
Nombre del archivo: codigo de colores
Autor: marcelo lira
Lugar: ITV

*/
#include<iostream>
#include<iomanip>

#include<iostream>
using namespace std;
int main(){

int n1, n2, n3, n4, n5, n6,n7,n8;
	cout<<"\nNegro     = 1 ";
	cout<<"\nCafe      = 2 ";
	cout<<"\nRojo      = 3 ";
	cout<<"\nNaranja   = 4 ";
	cout<<"\nAmarillo  = 5 ";
	cout<<"\nVerde     = 6 ";
	cout<<"\nAzul      = 7 ";
	cout<<"\nPurpura   = 8 ";
	cout<<"\nGris      = 9 ";
	cout<<"\nBlanco    = 10 ";
	cout<<"\nDorado = 5%";
	cout<<"\nPlateado = 10%";
	
	cout<<"\n¿Cual es el primer color? :";cin>>n1;
	cout<<"\n¿Cual es el segundo color? :";cin>>n2;
	cout<<"\n¿Cual es el tercer color? :";cin>>n3;
	cout<<"\n¿Cual es el cuarto color? :";cin>>n4;
	cout<<"\n¿Cual es el quinto color? :";cin>>n5;
	cout<<"\n¿Cual es el sexto color? :";cin>>n6;
	
cout<<n1<<n2<<n3<<n4<<n5<<n6<<n7<<n8;
 
	for(int i=0; i<n3; i++){
 
		cout<<0;
	}
 
     
 
 
	if((n7>=5)and(n7>=10)){
 
		n8=((5)*(4))/100;
		cout<<"\nSu porcentaje = %"<<n7<<endl;
	}
	else{
		n8=((10)*(n4))/100;
		cout<<"\nSu porcentaje = %"<<n7<<endl;
	}
 
int suma= 0,resta=0;
 
suma= n4+ n6;
resta= n4 - n6;
 
cout<<"\nSu limite de rango mayor es de : "<<suma<<endl;
cout<<"\nSu limite de rango menor es de : "<<resta<<endl;
 
return 0;
 
}
	
