#include <iostream>
using namespace std;
	class Figura
	{
	public:
		float x;
		Figura(int _x)
		{
			x = _x;
			cout<<"Hola soy una figura"<<endl;
		}
		
		virtual float perimetro();
		virtual float area();
	};
	class Circulo: public Figura
	{
		public:
			Circulo(int r) : Figura(r) {}
			}
	}
int main(){
	return 0;
	
}
