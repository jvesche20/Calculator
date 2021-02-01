#include <iostream>
#include <iomanip>
#include "calculator.h"

using namespace std;
/*-------------------------------------------------------------------*/
/* Project 1                                          */
/* this program displays a menu to calculate one of three functions: */
/* sine, cosine, and exponential (e^x)                               */
/* only addtion, subtraction, multiplication, and division are used  */
/*-------------------------------------------------------------------*/


/* define function prototypes */
void printCalculatorMenu(void);
void printAnswer(double result);

double error = 1.0E-10;  /* this is the global error tolerance */

int main(void)
{
	double x = 0.0F;
	double answer = 0.0F;

	int choice;

	do
	{
		cout << "Please choose one of the following options: " << endl;
		
		/* display menu choices */
		printCalculatorMenu();
		cin >> choice;

		switch (choice)
		{
		case 1:
			x = getX();
			answer = calculateSine(x);
			printAnswer(answer);
			break;
		case 2: 
			answer = calculateCosine(x);
			printAnswer(answer);
			break;
		case 3:
			x = getX();
			answer = calculateExponential(x);
			printAnswer(answer);
			break;
		default:
			/* do nothing */
			if (choice != 4)
			{
				cout << "Enter a valid choice, 1 through 4 ... " << endl;
			}
			break;
		}

	} while (choice != 4);
}

void printCalculatorMenu(void)
{
	cout << "1.	Calculate the Sine function of a X" << endl;
	cout << "2.	Calculate the cosine function of X" << endl;
	cout << "3.	Calculate the exponential function of X" << endl;
	cout << "4.	to quit ..." << endl;
	return;
}

double getX()
{
	double inputX;

	cout << "Enter the value for X ... ";
	cin >> inputX;
	return inputX;
}

void printAnswer(double result)
{
	cout << fixed << setprecision(15);
	cout << "The result is = " << result << endl;
}