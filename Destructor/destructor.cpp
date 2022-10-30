#include <iostream>
using namespace std;
class employee{
	public:
		
		//Let's define pointers.
	string *s;
	int *i;
	
	employee(int intggr,string str)
	{
		//Let's allocate pointers to memory.
		s=new string;
		i=new int;
		
		
		*s=str;
		*i=intggr;
	}
	//Destructor method
	~employee(){
	cout<< "Destructor"<<endl;
	}
	void show(){
		cout<<"integer expression ="<<*i<<"  "<<"String expression ="<<*s<<" "<<endl;
		}
	
};



int main(){
	
	
	employee *emp= new employee(/*integer entry*/25,/*String entry*/"HELLO");
	emp->show();
	delete emp;
	
}
