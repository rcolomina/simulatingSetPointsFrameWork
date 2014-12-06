#include "movil.h"
#include <iostream>
	  
Vector3D Vector3D::operator+(const Vector3D vector) {

	  Vector3D resultado(x+vector.x,y+vector.y,z+vector.z);

	  return resultado;
}


ostream &operator<<(ostream &os, Vector3D &v){

	  os<<"("<<v.get_x()<<","<<v.get_y()<<","<<v.get_z()<<")";
//	  os<<"("<<x<<","<<y<<","<<z<<")";

	  return os;
					
	  }
