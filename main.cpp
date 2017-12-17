#include <iostream>
#include "Person.h"

using namespace std;
//Create a function in your application called ModifyPerson() that accepts a Person object as an argument.
// NOTE: This function should be in the application area and not inside the Person class.
void modifyPerson(Person &person){
    cout << "In function modifyPerson()" << endl;
    //Inside the ModifyPerson() function, change the value in the name member variable.
    person.set_name("John Doe");
}
//Create a function called PassByRef that accepts a reference variable as an argument
//Output a statement indicating the current function name.
void passByRef(int &value) {
	cout << "In function passsByRef()" << endl;
	//Modify the value of pNum, setting it to 50, and output the value to the console.
	value = 50;
	cout << "pNum Value = " << value << endl;
}

//Create a function called PassByValue that accepts an integer argument.
//Inside PassByValue, output a text string indicating the name of the function you are in.
void passByValue(int value) {
	cout << "In function passsByValue()" << endl;
	//Modify the value of num1 inside the PassByValue function and 
	//output the new value to the console window.
	value++;
	cout << "Incemented value received. Value = "<< value << endl;

}

int main() {
	//Create a new C++ console application called PointersLab
	//In your main() function, create two variables.One variable needs to an 
	//intrinsic integer variable named num1 and the second needs to be a pointer to an int pNum.
	//Assign the value 3 to num1.
	int num1{ 3 };
	int *pNum;

	//Assign the value 5 to the memory location stored in pNum. 
	//(Hint, there is a special operator used for this)
	pNum = new int{ 5 };

	//Call PassByValue and pass in num1 as the argument.
	passByValue(num1);
	//After the call returns to main(), output the value of num1 to the console window again.
    std::cout << "num1 = "<< num1 << std::endl;

	//Call PassByRef and send pNum as the argument.
	passByRef(*pNum);
	std::cout << "pNum = " << *pNum << std::endl;

    //Call PassByValue and pass in pNum as an argument.
    passByValue(*pNum);

    //Create a pointer variable to a double, and allocate memory for it using the new keyword.
    //Assign a value to the memory location.
    double *doubleValue = new double{35};
    //Use the dereference operator, get the value and output it to the console.
    std::cout << "doubleValue = " << *doubleValue<< std::endl;
    //Deallocate the memory for that variable.
    delete doubleValue;
    //Output the value stored in the memory location for that variable again.
    std::cout << "doubleValue = " << *doubleValue<< std::endl;

    //Instantiate a Person object in your main() method and assign values to the member variables.
    Person *person1 = new Person("Jose",35,1.74,85.67);
    //Output the values stored in the member variables to the console window
    person1->toString();

    //Call the ModifyPerson() function, passing in your Person object you just created.
    modifyPerson(*person1);

    //Back in main(), output the values stored in the Person object you created.
    person1->toString();

    return 0;
}