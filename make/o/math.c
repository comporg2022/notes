/* voc 2.1.0 [2020/10/25] for gcc LP64 on gentoo xtpa */

#define SHORTINT INT8
#define INTEGER  INT16
#define LONGINT  INT32
#define SET      UINT32

#include "SYSTEM.h"




export INT16 math_add (INT16 a, INT16 b);


INT16 math_add (INT16 a, INT16 b)
{
	return a + b;
}


export void *math__init(void)
{
	__DEFMOD;
	__REGMOD("math", 0);
/* BEGIN */
	__ENDMOD;
}
