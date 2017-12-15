# edX DEV210.2x LAB 1

## Instructions

This lab will not be guided but rather will expect you to apply the knowledge you have gained in this module, to complete the requirements as outlined below.  You will be graded on the lab assessment which will contain questions related to the completion of the lab.  As a result, ensure that you use any values specified in the lab instructions to ensure that you can answers the questions in the lab assessment.

### Lab Requirements

1. Create a new C++ console application called PointersLab
2. In your main() function, create two variables.  One variable needs to an intrinsic integer variable named num1 and the second needs to be a pointer to an int pNum.
2. Assign the value 3 to num1.
2. Assign the value 5 to the memory location stored in pNum.  (Hint, there is a special operator used for this)
2. Create a function called PassByValue that accepts an integer argument.
2. Inside PassByValue, output a text string indicating the name of the function you are in.
2. Call PassByValue and pass in num1 as the argument.
2. Modify the value of num1 inside the PassByValue function and output the new value to the console window.
2. After the call returns to main(), output the value of num1 to the console window again.
2. Create a function called PassByRef that accepts a reference variable as an argument
2. Call PassByRef and send pNum as the argument.
2. Output a statement indicating the current function name.
2. Modify the value of pNum, setting it to 50,  and output the value to the console.
2. After the call returns to main(), output the value of pNum to the console.
2. Call PassByValue and pass in pNum as an argument.
2. Document any error messages for the lab assessment that might occur during your lab.
2. Create a pointer variable to a double, and allocate memory for it using the new keyword.
2. Assign a value to the memory location.
2. Use the dereference operator, get the value and output it to the console.
2. Deallocate the memory for that variable.
2. Output the value stored in the memory location for that variable again.
2. Document any errors experienced for the lab assessment.
2. Create a simple class in your C++ application called Person.
2. Give Person member variables for name, age, height, and weight.  Feel free to make these private with public accessors or make them public without accessors.  It is not important for this exercise.
2. Create a function in your application called ModifyPerson() that accepts a Person object as an argument.  NOTE: This function should be in the application area and not inside the Person class.
2. Instantiate a Person object in your main() method and assign values to the member variables.
2. Output the values stored in the member variables to the console window
2. Call the ModifyPerson() function, passing in your Person object you just created.
2. Inside the ModifyPerson() function, change the value in the name member variable.
2. Back in main(), output the values stored in the Person object you created.  Did the name change?  It should have if you passed the object correctly to the function.


