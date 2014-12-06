#include <string>
//#include <vector>
#include "vector3d.h"

using namespace std;
/*
//suma de dos vectores componente a componentes
template <typename T>
std::vector<T>& operator+=(std::vector<T>& a, const std::vector<T>& b)
{
    for(unsigned int i=1;i<=a.size();i++)
			a[i]=(a[i]+b[i]);

    return a;
}

template <typename T>
std::vector<T>& operator+=(std::vector<T>& aVector, const T& aObject)
{
    aVector.push_back(aObject);
    return aVector;
}

template <typename T>
std::vector<T>& operator*=(std::vector<T>& aVector, const T& aObject)
{
    aVector.push_back(aObject);
    return aVector;
}
*/



//Informacion de identificacion 
class Identificador{
	public:
	  Identificador(int id):id(id){}
	  Identificador(int id,string nombre):id(id),nombre(nombre){}
	
	  int id;
	  string nombre;
};




class Movil {

	public:
	  Movil(Identificador id,Vector3D pos,Vector3D vel,Vector3D ori):
			 id(id),
			 posicion(pos),
			 velocidad(vel),
			 orientacion(ori){}

	  Identificador get_id(){return id;}
	  Vector3D get_posicion(){return posicion;}
	  Vector3D get_velocidad(){return velocidad;}
  	  Vector3D get_orientacion(){return orientacion;}

	  void acelerar(Vector3D aceleracion,double dt);
			 //posicion+=aceleracion*dt;
			 

	 
	private:
	  Identificador id;
	  Vector3D posicion;
	  Vector3D velocidad;
	  Vector3D orientacion;
};
