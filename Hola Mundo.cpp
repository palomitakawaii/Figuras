#include <iostream>
using namespace std;
	class Figura
	{
	public:
		float x;
		Figura(float _x)
		{
			x = _x;
			cout<<"Hola soy una figura"<<endl;
		}
		
		virtual float perimetro() = 0;
		virtual float area() = 0;
	};
	class Circulo: public Figura
	{
		private:
		float r;
		
	public:
		Circulo(float radio) : Figura(radio) 
		{
			r = radio;
			cout<<"Hola soy el hijo y soy un circulo"<<endl;
		}
		float perimetro()
		{
			return 2 * r * 3.1416;
		}
		float area()
		{
			return 3.1416 * r * r;
		}
	};
int main()
{
	Circulo mi_circulo = Circulo(5);
	//mi_circulo.area
	return 0;
}
