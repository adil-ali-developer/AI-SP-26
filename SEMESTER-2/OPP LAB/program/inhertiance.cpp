#include<iostream>
using namespace std;
class Animal{
	public :
   string name;
   string color;
   string gender;
   
 public : 
 
 void input(){
 	name="Cat";
 	color="Black";
 	gender="Male";
 	
 	cout<<name<<endl;
 }
};

class Dog : public Animal{
	
	public :
		void display(){
			name="Dog";
	        cout<<name<<endl;		
		}
};
int main(){
	Dog d;
	d.display();
	d.input();
}
