#ifndef _MATH_H_
#include <math.h>
#endif

#define __areaTri(a, b, c) (sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)) / 4.0)
#define __prTri(a, b, c) (a + b + c)
#define __areaSq(a) (a * a)
#define __prSq(a) (4 * a)
#define PI 3.141
#define __areaCir(r) (PI * r * r)
#define __prCir(r) (2 * PI * r)