#ifndef __UTILS_H__
#define __UTILS_H__

#include <cmath>

inline double dist(float x1, float y1, float x2, float y2) {
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

#endif // !__UTILS_H__
