#include <iostream>
#include <stdio.h>

using namespace std;


struct direccion {
		char calle [20];
		int cp;
		char cuidad[20];
		
		
};

struct carros {
	char modelo[20];
	int edad;
	float estatura;
	struct direccion dire;
	
};
int main(int argc, char** argv){
	struct carros P1[5];
	struct  carros*apuntador;
	
	apuntador=&P1[0];
	
	for (int i=0; i<1; i++){
		
		cout<<"modelo:";
		cin.getline(P1[i].modelo,20,'\n');
		cout<<"año:";
		cin>>P1[i].edad;
		cout<<"km por hora;";
		cin>>P1[i].estatura;
		cout<<"precio:";
		fflush(stdin);
		cin.getline(P1[i].dire.calle,20,'\n');
		
	}

	cout<<endl<<"modelo guardado"<<  apuntador->  modelo;
	cout<<endl<<"año guradada;"<<  apuntador-> edad;
	cout<<endl<<" km por horaguardada;"<<  apuntador-> estatura;
	cout<<endl<<"precio guardada;"<<  apuntador-> dire.calle;
	
return 0;	
}
