#include<stdio.h>

// --It is a special purpose directive and is used to turn on or off some features
// this type of directive are compiler specific and they very from compiler to compiler
 
// --#pragma startup and #pragma exit: these directive helpd us to specify the functions that are needed to run before program startup(before control pass to main()) and just before program exit(just before control returns to main())

//void fun1();
//void fun2();
void fun3();
void fun4();
//#pragma startup fun1
//#pragma exit fun2

/*void fun1(){
	printf("Inside fun1\n");
}

void fun2(){
	printf("Inside fun2\n");
}
//this program print only main() condition
//because gcc does not support #pragma startup and exit
*/


void __attribute__((constructor)) fun3;
void __attribute__((destructor)) fun4;

// we can use fun3 and fun4 concept for output
void fun3(){
        print("fun3 is \n");
}

void fun4(){
        print("fun4 is \n");
}

int main(){
	printf("Inside main\n");
        return 0;
}

