#include <tchar.h>  
#include <iostream> 
using namespace std; 

class Area
{
	double a, b, s;
	char Area_t;
public:
	Area(double x, double y)
	{
		this->Area_t = 'R';
		this->a = x;
		this->b = y;
		this->s = x*y;
	}
	Area(double x)
	{
		this->Area_t = 'C';
		this->a = x;
		this->b = 0;
		this->s = 3.14*pow(x, 2);
	}
	void print()
	{
		cout << "\n";
		cout << "Area type:" << Area_t << endl;
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "S(" << Area_t << ") = " << s << endl;
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	Area f1(10);
	f1.print();
	Area f2(3, 4);
	f2.print();	
	system("pause"); 
	return 0;
}
