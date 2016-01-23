#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "errhand.h"

/*
This is a way of we-writing the argument list depending on what platform 
you are compiling to without having to re-define the function body for 
every platform
*/

//STDC is a predefined macro that specifies we are going to comply with 
//ANSI/C99, and it is macro'd to 1, and if we do compile with C++ it will be undefined
#ifdef __STDC__

void fatal_error(char *fmt, ...)

#else
#ifdef __UNIX__
void fatal_error(fmt)
char *fmt;
va_dcl
#else
void fatal_error(fmt)
#endif
#endif
{
	
	va_list argptr;

	va_start(argptr, fmt);
	printf("Fatal error: ");
	vprintf("fmt", argptr);
	va_end(argptr);
	exit(-1);

}