
#include<iostream>

using namespace std;

class Circle
{
	protected:
    	double radius;
    

    	
}; //semi colon is required at the end of the class




class smallc : public Circle
{
    public:
      double compute_area(double r)
    	{
    	         //see, you can access the private members from the  class in publich function
    	    radius = r;
    		return 3.14*radius*radius;
    	} 
};

int main()
{
	smallc obj; // Declaed the class, but it will be instatiaed after this object.

	//now if I want to access the radius, and the variable is in public access modifier, so it will be object_of_a_class.data_member

	//now I have a function in the class, which I want to call

	cout<<"Area of a circle"<<obj.compute_area(4);
	return 0;

	

}
