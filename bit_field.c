#include<stdio.h>
/*
We can specify size (in bits) of structure and union members,means use memory efficiently
==>when device transmit status or information encoded into multiple bits for this type of situation bit fields is most efficient
==> Encryption routine need to access the bits within a byte in that situation bit field is quote useful
*/
struct date {
	unsigned int a:15;
	unsigned int b:18;
	unsigned int c;
	unsigned int d[4]:5; //will give copile error
};

int main() {
	printf("size of date is %lu bytes\n",sizeof(struct date));
	struct date dt = {29,11,2021};
	//we cannot have a pointer to bit field members as they may not start at a byte boundary
	//bit field cannot be a static but struct and class can be static
	//array of bit is not allowed 
	printf("size of c is%lu\n",sizeof(dt.c));

        //printf("address of dt.a is%p\n",&dt.a);
	//line work fine for x as it is not bit member
	printf("address of dt.c is%p\n",&dt.c);
	printf("Date is %d-%d-%d",dt.a,dt.b,dt.c);
        return 0;
}
