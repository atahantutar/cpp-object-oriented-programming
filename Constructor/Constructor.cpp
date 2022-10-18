#include <iostream>
using namespace std;

class phone{
	private:
		string brand;
		string model;
		int year;
		int memory;
		public:
			
			
			
			//Constructor method definition
		phone(string brnd,string mdl,int yr,int mmry)
		{
            this->brand=brnd;
            this->model=mdl;
            this->year=yr;
            this->memory=mmry;
 
             print(); 

		}
		
		phone(string brnd,string mdl,int yr)
		{
		this->brand=brnd;
		this->model=mdl;
		this->year=yr;
		this->memory=0;
		print();
		
		
		}
	
   	phone()
	   {
		this->brand="No information";
		this->model="No information";
		this->year=0;
		this->memory=0;
		print();
	}

	//Print on the constructor
	void print(){
		cout<<"-------------------"<<endl;
	    cout<<this->brand<<endl;
	    cout<<this->model<<endl;
	    cout<<this->year<<endl;
	    cout<<this->memory<<endl;
		
	}
	
	
	
	
};

int main(){
	
	phone object1;
	phone object2("Apple","Iphone",2022,64);
	phone object3("Samsung","Note 9",2022);
	
	//To use object0 you need to grab all constructors.(Automatic constructor will be created in Class.)
	//phone object0;
	//object.print();
	return 0;
}
