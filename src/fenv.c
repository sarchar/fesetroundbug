#include <fenv.h>
#include <math.h>
#include <stdio.h>

void test()
{
    fesetround(FE_UPWARD);
    printf("Should be -4: %d\n", (int)rint((double)-4.4));
}

#ifdef TEST
int main()
{
	test();
}
#endif
