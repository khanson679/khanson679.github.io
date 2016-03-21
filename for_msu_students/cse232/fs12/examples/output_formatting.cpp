/* 
 * C++ Output Formatting
 *
 * Author: Kenneth Hanson
 * Last Edited: 10/7/12
 *
 * Topics covered:
 *   Floating point formatting (showpoint, fixed, scientific)
 *   Field alignment           (right, left)
 *   Decimal precision         (setprecision)
 *   Column formatting         (setw)
 *
 * Note: for each example, both the old "setiosflags" and new "independent
 *   manipulators" are demonstrated, if applicable.
 */

#include <iostream>
#include <iomanip>

using namespace std;

const double num = 2.0e2;

int main()
{
	cout << "\n***Demonstrating C++ output formatting***" << endl;
	
	//
	// Floating point formatting
	//
	
	// First, the old (hard) way
	// After using one flag, you have to reset it before using the other
	// If both are set or unset, the default is used (depending on the exponent)
	cout << endl
		<< "FP formatting with 'setiosflags' and 'resetiosflags'" << endl
		<< "----------------------------------------------------" << endl
		<< "Default output:     " << num << endl
		<< "With 'showpoint':   " << setiosflags(ios::showpoint) << num << endl
		<< "With 'fixed':       " << setiosflags(ios::fixed) << num << endl
		
		<< "With 'scientific':  " << resetiosflags(ios::floatfield)
			<< setiosflags(ios::scientific) << num << endl
		<< "Reseting all flags: " << resetiosflags(ios::showpoint | ios::floatfield)
			<< num << endl
		<< "Setting same flags: " << setiosflags(ios::showpoint | ios::scientific)
			<< num << endl;
	
	// Now, the new (easy) way
	cout << endl
		<< "FP formatting with independent manipulators" << endl
		<< "-------------------------------------------" << endl
		<< resetiosflags(ios::showpoint | ios::floatfield)
		<< "Default:           " << num << endl
		<< "With 'showpoint':  " << showpoint << num << endl
		<< "With 'fixed':      " << fixed << num << endl
		<< "With 'scientific': " << scientific << num << endl;
	
	//
	// Decimal precision
	//
	
	cout << endl
		<< "Decimal precision with 'setprecision'" << endl
		<< "-------------------------------------" << endl
		<< "Current:              "    << num << endl
		<< "With setprecision(2): " << setprecision(2) << num << endl;
	
	//
	// Field alignment
	//
	
	// First, the old way
	cout << endl
		<< "Field alignment with 'setiosflags' and 'resetiosflags'" << endl
		<< "------------------------------------------------------" << endl
		<< "Current:      >" << setw(11) << num << "<" << endl
		<< "Left aligned: >" << setiosflags(ios::left)
			<< setw(11) << num << "<" << endl
		// Again, you have to reset one option to use the other
		<< "Right aliged: >" << resetiosflags(ios::left) << setiosflags(ios::right)
			<< setw(11) << num << "<" << endl;
	
	// Now, the new way
	cout << endl
		<< "Field alignment with independent manipulators" << endl
		<< "---------------------------------------------" << endl
		<< "Current:      >" << setw(11) << num << "<" << endl
		<< "Left aligned: >" << left << setw(11) << num << "<" << endl
		<< "Right aliged: >" << right << setw(11) << num << "<" << endl;
	
	//
	// Column formatting
	//
	
	cout << endl
		<< "Column formatting with 'setw'" << endl
		<< "-----------------------------" << endl
		<< endl
		<< "  Column1      Column2  " << endl
		<< "-----------  -----------" << endl
		<< right
		<< setw(11) << num << "  " << setw(11) << num << " (right aligned)" << endl
		<< left
		<< setw(11) << num << "  " << setw(11) << num << " (left aligned)" << endl
		<< setprecision(10) << setw(11) << num << "  " << setw(11) << num
			<< " (values don't fit)" << endl;

	cout << "\n***Demonstration Complete***" << endl << endl;
}
