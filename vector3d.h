#include <iostream>

using namespace std;

class Vector3D{
	public:
	  Vector3D():x(0),y(0),z(0){}
	  Vector3D(double x,double y,double z):x(x),y(y),z(z){}

	  Vector3D operator+(const Vector3D vector);

	  double get_x(){return x;}
	  double get_y(){return y;}
	  double get_z(){return z;}

//	  ostream& operator<<(ostream& os);
	 friend ostream &operator<<(ostream &os, Vector3D &v);

	private:
	  double x,y,z;
};

inline Vector3D operator*(double k, Vector3D a)
{
	  return Vector3D(k*a.get_x(), 
							k*a.get_y(), 
							k*a.get_z());
}

inline Vector3D operator*(Vector3D a, double k)
{
   return k*a;
}
