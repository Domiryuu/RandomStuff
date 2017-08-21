#include <stdio.h>
/*
 * notice that PublicAPI.h is in <> and not ""
 * we will be using compiler flags to include where the header files are.
 */
#include <PublicAPI.h>

/*
 * Here is the structure of the struct defined in the API
 */
struct _MyStruct {
	char * stuff;
	int 	 and;
	_Bool  Things;
};

void printHello(){
	prinf("Hello");
}
