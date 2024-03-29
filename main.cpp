// import libs
#include <cstdlib>
#include <iostream>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <string>
#include <typeinfo>

// include header files for the OOP section
#include "Shape.h"
#include "Circle.h"

// source: https://www.youtube.com/watch?v=6y0bp-mnYU0&ab_channel=DerekBanas

using namespace std;

// printing some data types:
int main(int argc, char **argv)
{
	// print character, int, int with space, float with 3 decimal places,
	// and a string.
	printf("%c %d %5d %.3f %s\n", "a", 10, 5, 3.1234, "hi");

	return 0;
}

/////////////////////////////////////////////

//
// Program that takes user input and performs some math operations
int main(int argc, char **argv)
{
	// Print character, int, int with space, float with 3 decimal places,
	// and a string.
	string q1 = "Enter a number: ";
	string num1, num2;

	// output a string
	cout << q1;

	// receive input
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;

	// stoi converts string to integer
	int nNum1 = stoi(num1);
	int nNum2 = stoi(num2);

	// Some mathematical operations
	printf("%d + %d = %d\n", nNum1, nNum2,
		   (nNum1 + nNum2));
	printf("%d / %d = %d\n", nNum1, nNum2,
		   (nNum1 / nNum2));
	printf("%d * %d = %d\n", nNum1, nNum2,
		   (nNum1 * nNum2));
	printf("%d - %d = %d\n", nNum1, nNum2,
		   (nNum1 - nNum2));
	printf("%d %% %d = %d\n", nNum1, nNum2,
		   (nNum1 % nNum2));

	return 0;
}

/////////////////////////////////////////////////////
// Program that takes user input and prints the number inputted
int main(int argc, char **argv)
{
	{
		cout << "Enter a number:";

		int t;
		cin >> t;

		cout << "You entered: " << t;

		return 0;
	}

	//////////////////////////////////////////////////////////

	// Logical operators
	// ifs and else.
	// Program that checks your birthday and says if important or not.
	int main(int argc, char **argv)
	{
		string sAge;

		cout << "Enter age: ";
		cin >> sAge;

		int nAge = stoi(sAge);

		if ((nAge >= 1) && (nAge <= 18))
		{
			cout << "Important birthday." << endl;
		}
		else if ((nAge == 21) || (nAge == 50))
		{
			cout << "Important birthday." << endl;
		}
		else if (nAge >= 65)
		{
			cout << "Important birthday." << endl;
		}
		else
		{
			cout << "Sorry, not an important birthday." << endl;
		}

		return 0;
	}

	int main(int argc, char **argv)
	{
		int age = 25;
		bool can_vote = (age >= 18) ? true : false;
		// this ensures that we print out true/false rather than 1/0
		cout.setf(ios::boolalpha);
		cout << "Can Eirik Vote: " << can_vote << endl;

		return 0;
	}

	///////////////////////////////////////////////////////

	// ARRAYS
	int main(int argc, char **argv)
	{
		// type, name, size
		int arr_nums[10] = {1};
		int arr_nums2[] = {1, 2, 3};
		int arr_nums3[5] = {8, 9};

		cout << "1st value: " << arr_nums3[0] << endl;

		// can change the value in an array
		arr_nums3[0] = 7;

		cout << "1st value after update: " << arr_nums3[0] << endl;

		// multi-dimensional arrays
		// virst val is num of layers, second is number of cols, third num rows
		int arr_nums4[2][2][2] = {{{1, 2}, {3, 4}},
								  {{7, 8}, {11, 12}}};

		cout << arr_nums4[0][1][1] << endl;

		return 0;
	}

	// VECTORS
	int main(int argc, char **argv)
	{

		// create a vector
		vector<int> vNums(2);

		vNums[0] = 1;
		vNums[1] = 2;
		// Or add number at the end this way
		vNums.push_back(3);

		// print size of vetor
		cout << "Vector Size: " << vNums.size() << endl;

		return 0;
	}

	//////////////////////////////////////////////////

	// LOOPS

	// while loop 1
	int main(int argc, char **argv)
	{

		// define var that is used in while loop
		int i = 1;

		while (i <= 20)
		{
			// check if even
			if ((i % 2) == 0)
			{
				// increment i (i.e. skip even i's)
				i += 1;
				continue;
			}
			// create an exception for when i = 15 and break
			if (i == 15)
				break;

			// print the i that satisfies the above,
			// will be odd
			cout << i << endl;
			// increment i again, to avoid infinite loop
			i += 1;
		}

		return 0;
	}

	// while loop 2
	int main(int argc, char **argv)
	{

		// create a vector of words
		vector<string> words;
		stringstream ss("Some Random Words");
		string word;
		// getline() exctracts characters the vector
		// and stores them as strings, according to our
		// delimiter of choice (space in this case)
		while (getline(ss, word, ' '))
		{
			// add word to words vector (like l.append())
			words.push_back(word);
		}

		// ++i means increment i
		for (int i = 0; i < words.size(); ++i)
		{
			cout << words[i] << endl;
		}

		// abbreviated for loop
		int arr3[] = {1, 2, 3};
		for (auto x : arr3)
			cout << x << endl;
		return 0;
	}

	// DO WHILE LOOP
	// Guaranteed to execute at least once
	// Example; RANDOM NUMBER GUESSING GAME
	int main(int argc, char **argv)
	{

		srand(time(NULL));

		// Generate random number (max 10)
		int secretNum = rand() % 11;
		int guess = 0;
		do
		{
			cout << "Guess the number: ";
			// store the guess as "guess"
			cin >> guess;

			if (guess > secretNum)
				cout << "Too Big\n";
			if (guess < secretNum)
				cout << "Too Small\n";
			// Let loop run as long as guess is incorrect
			// Break the loop with a print statement when guess is correct
		} while (secretNum != guess);
		cout << "You guessed correctly!" << endl;

		return 0;
	}
	/////////////////////////////////////////

	// STRINGS
	int imGlobal = 0;
	const double PI = 3.141;

	int main(int argc, char **argv)
	{
		string str1 = "I'm a string";
		// get first char
		cout << "1st: " << str1[0] << endl;
		// get last char
		cout << "1st: " << str1.back() << endl;
		// get length
		cout << "Length: " << str1.length() << endl;
		// copy strings
		string str2 = str1;
		// copy string after certain characters
		string str3(str2, 4);
		cout << "str3: " << str3 << endl;

		// add/concatenate to end of string
		string str4 = str1 + ", and you're not";
		// alternative way
		str4.append("!");
		cout << "str4: " << str4 << endl;

		// Using find() method
		if (str4.find("string") != string::npos)
		{
			cout << "String Index: " << str4.find("string") << endl;
		}

		// Convert number to string
		string strNum = to_string(3);
		cout << "I'm a string: " << strNum << endl;

		// Characters
		char letterZ = 'z';
		char num5 = '5';
		char aSpace = ' ';

		cout << "Is z a letter or number: " << isalnum(letterZ) << endl;
		cout << "Is z a letter or number: " << isalpha(letterZ) << endl;
		cout << "Is 5 a letter or number: " << isdigit(num5) << endl;
		cout << "Is space a space: " << isspace(aSpace) << endl;

		return 0;
	}

	////////////////////////////////////////////

	// MATH FUNCTIONS
	// see ref here https://en.cppreference.com/w/cpp/numeric/math
	// self explanatory
	// e.g.
	int main(int argc, char **argv)
	{

		cout << "2^4 = " << pow(2, 4) << endl;
		cout << "e^1 = " << exp(1) << endl;
		cout << "sqrt(64) = " << sqrt(64) << endl;
		cout << "max(100, 99) = " << max(100, 99) << endl;

		return 0;
	}

	////////////////////////////////////////////////////////////////////////////////

	//   P O I N T E R S

	// POINTERS; store an address in memory
	//  i.e. a variable whose value is the address of another variable
	// Declare the pointer to be the same data type to which it points
	// In C++, to receive pointer, add a * next to the datatype in function
	// e.g. int main(string* name)

	// Dereference operator; changes value at address
	/*
	Say the object you have a pointer to is your house.
	The pointer would be the address of the house.
	If I wanted to "access" your house, and all I had was the
	address (the pointer to the house),
	I would have to use that address to locate your house physically.
	This is the dereferencing part: using the pointer or 'address'
	of the object to actually locate it to be accessed
	(read, opened, added to another object, etc.)
	*/

	void AssignAge3(int *pAge);

	int main(int argc, char **argv)
	{

		// create a pointer
		int *pAge2 = NULL;

		int age2 = 25;
		// assign using ref-operator
		pAge2 = &age2;
		// I.e. store the address of the variable age2

		// print the hexadecimal address
		cout << "Address: " << pAge2 << endl;
		cout << "Value: " << *pAge2 << endl;

		// create pointer to array
		int intArray[] = {1, 2, 3, 4};
		int *pointer_array = intArray; // pointer to array

		cout << "First Address of Array: " << pointer_array << endl;
		// get second address by iterating one step in the array
		pointer_array++;
		cout << "Second Address of Array: " << pointer_array << endl;

		return 0;
	}

	void AssignAge3(int *pAge)
	{
		*pAge = 22;
	}

	///////////////////////////////////////////////

	// Now we do the above, but create a function that accepts arrays
	// and doubles them.

	void AssignAge3(int *pAge);

	// inputs: pointers to our array and size of array
	void DoubleArray(int *arr, int size);

	int main(int argc, char **argv)
	{

		// create a pointer
		int *pAge2 = NULL;

		int age2 = 25;
		// assign using ref-operator
		pAge2 = &age2;

		// print the hexadecimal address
		cout << "Address: " << pAge2 << endl;
		cout << "Value: " << *pAge2 << endl;

		// create pointer to array
		int intArray[] = {1, 2, 3, 4};
		int *pointer_array = intArray; // pointer to array

		cout << "First Address of Array: " << pointer_array << endl;
		// get second address by iterating one step in the array
		pointer_array++;
		cout << "Second Address of Array: " << pointer_array << endl;

		// Call our new DoubleArray function
		// and pass in our integer array
		DoubleArray(intArray, 4);
		// don't need to assign since it's a pointer

		// this prints each element in the array times 2
		for (int i = 0; i < 4; ++i)
		{
			cout << " Array " << intArray[i] << endl;
		}

		return 0;
	}

	void DoubleArray(int *arr, int size)
	{
		for (int i = 0; i < size; ++i)
		{
			arr[i] = arr[i] * 2;
		}
	}

	////////////////////////////////////////////////////////////////

	// EXCEPTION HANDLING

	// exceptions are errors that occur when things dont go as expected

	int main(int argc, char const *argv[])
	{

		// e.g. divide 10 by 0
		double num3 = 10, num4 = 0;
		// create try block
		try
		{
			if (num4 == 0)
			{
				throw "Division by Zero Error.";
			}
			else
			{
				printf("%.1f / %.1f = %.1f", num3, num4, (num3 / num4));
			}
		}
		// catch
		catch (const char *exp)
		{
			cout << "Error: " << exp << endl;
		}

		return 0;
	}

	//////////////////////////////////////////////////////////////////////

	// O B J E C T S  A N D  C L A S S E S //

	/*
	- OOP is about simulating real world concepts
	- Done by creating objects that have attributes (e.g. height, weight)
	- and capabilities (run, eat, talk) = METHODS / functions
	*/

	void ShowArea(Shape & shape); // function prototype for Shape

	int main(int argc, char const *argv[])
	{

		Shape square(10, 5);
		Circle circle(10);
		ShowArea(square);
		ShowArea(circle);

		return 0;
	}

	// Polymorphism illustrated:
	// - It inherits from the Shape class
	void ShowArea(Shape & shape)
	{
		cout << "Area : " << shape.Area() << "\n";
	}

	//////////////////////////////////////////////////////////////////
