
#include <iostream>
#include <stdlib.h>

#include <map>

#include "movil.h"
using namespace std;


int main(){

	  srand(time(NULL));

	  int n=10;

	  cout.precision(5);

	  /*  double posVar=100;
	  double posDesp=50;
//	  double posMedia=
//	  double posRangoMin=-100; //Km
//	  double posRangoMax=+100; //Km

	  double velVar=500; 
	  double velRangoMin=100; //Km/h
	  double velRangoMax=1000; //Km/h

	  double oriRangoMin=-1;
	  double oriRangoMax=+1;*/

	  //Setting up a set of moviles
	  map<int,Movil*> mapMoviles;
	  for(int i=0;i<n;i++){
			 Identificador id(i);
			 Vector3D posicion(rand()%100-50,
									 rand()%100-50,rand()%1000+100);

			 Vector3D velocidad(rand()%1000+500,
									  rand()%1000+500,
									  rand()%10);

			 Vector3D orientacion(rand()%100-50,rand()%100-50,0);

			 Movil *movil=new Movil(id,posicion,velocidad,orientacion);

			 mapMoviles[i+1]=movil;

			 cout<<"pos:"<<posicion<<" vel:"<<velocidad<<" ori:"<<orientacion<<scientific<<endl;
	  }



	  return 0;
}
