#include<iostream>
using namespace std;

class Bank{
	private :
		string name;
	protected :		
		string id;
		string location;
		string accounts;

	public : 
	void display(){
		name="Shan";	
		cout<<name;
	}
};
int main(){
	Bank c;
	c.display();
}
