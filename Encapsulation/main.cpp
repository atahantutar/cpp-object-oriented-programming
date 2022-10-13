#include <iostream>
using namespace std;
class Persons{
	private:
		string name;
		string surname;
		int Telnumber;
		int age;
    public: 
          
    	   void setinformation(string namess, string surnamess,int Telnumberss,int agess ){
    	 	name = namess;
    	 	surname=surnamess;
    	 	Telnumber=Telnumberss;
    	 	
    	 	if(agess>0 && agess<110){
    	 		age=agess;

			 }
    	 	else{
    	 	 cout<<"Please enter your age correctly:";
			 }
    	 
    	 	
	}
	
	string getname(){
			return name;
		}
   string getsurname(){
			return surname;
		}
	int gettelnumber(){
			return Telnumber;
		}
    int getage(){
			return age;
		}
	void print(){
		cout<<"PERSONAL INFORMATION"<<endl;
		cout<<"NAME:"<<getname()<<endl;
		cout<<"SURNAME:"<<getsurname()<<endl;
		cout<<"TELNUMBER:"<<gettelnumber()<<endl;
		cout<<"AGE:"<<getage()<<endl;
	}    
		/*
		    you can do it like this
		    
		void setname(int namess){
    	 	name = namess;
		  }
		 	void setsurname(string surnamess){
    	 	name = namess;
		  }
		 	void setname(int telnumberss){
    	 	name = namess;
		  }
		 	void setage(int agess){
    	 	age = agess;
		  }*/
		
	
	
};

int main(int argc, char** argv) {
	
	Persons pes; //Object identification
	
	//Variables for data from input
	string name;
	string surname;
    int age;
    int Telnumber;
    
    cout<<"Plase Enter Your Name:"<<endl;
    cin>>name;
    cout<<"Plase Enter Your Surname:"<<endl;
    cin>>surname;
    cout<<"Plase Enter Your Telnumber:"<<endl;
    cin>>Telnumber;
    cout<<"Plase Enter Your Age:"<<endl;
    cin>>age;
    
    
	pes.setinformation(name,surname,Telnumber,age);
    pes.print();
    
		return 0;
}
