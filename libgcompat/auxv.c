#include <sys/auxv.h> /* getauxval */

unsigned long __getauxval(unsigned long value)
{
	return getauxval(value);
}
