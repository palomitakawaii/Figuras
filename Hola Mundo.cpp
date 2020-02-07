#include <iostream>
using namespace std;
	class Figura
	{
	public:
		float x;
		Figura(int _x)
		{
			x = _x;
		}
		
		virtual float perimetro();
		virtual float area();
	};
int main(){
	return 0;
	
}
