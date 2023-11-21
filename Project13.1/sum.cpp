#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = x;
	s = 0;
	do {
		n++;
		dod(); // виклик процедури обчислення доданку
		s += exp(-x);
	} while (fabs(a) < e);
}