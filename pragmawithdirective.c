/* this directive used to hide the warning msgs which are display during complilation. Useful when you have large program and you want to solve errors before looking on warning


#pragma warn +xxx (to show the warning)
#pragma warn -xxx (to hide the warning)
#pragma warn .xxx (to toggle between hide and show)
#pragma warn -rvl: it hides those warning which are raised when a fun which is supposed to return a value does not return a value
#pragma warn -par:hides those warning which are raised when fun does not uses the parameters passed to it
#pragma warn -rch: raised when a code is unreachable 
*/
// Example to explain the working of
// #pragma warn directive
// This program is compatible with C/C++ compiler

#include<stdio.h>

#pragma warn -rvl /* return value */
#pragma warn -par /* parameter never used */
#pragma warn -rch /*unreachable code */
		
int show(int x)
{
	// parameter x is never used in
	// the function
	
	printf("GEEKSFORGEEKS");
	
	// function does not have a
	// return statement
}
			
int main()
{
	show(10);
	
	return 0;
}


