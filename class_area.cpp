
#include<iostream>

using namespace std;

class Circle
{
	public:
    	double radius;
    
    	double compute_area()
    	{
    		return 3.14*radius*radius;
    	}
}; //semi colon is required at the end of the class

int main()
{
	Circle obj; // Declaed the class, but it will be instatiaed after this object.

	//now if I want to access the radius, and the variable is in public access modifier, so it will be object_of_a_class.data_member
	obj.radius= 4;
	//now I have a function in the class, which I want to call

	cout<<"Area of a circle"<<obj.compute_area();
	return 0;

	

}
