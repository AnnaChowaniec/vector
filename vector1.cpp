#include "vector1.h"

CVector operator+ (const CVector& lhs, const CVector& rhs) {
  CVector temp;
  temp.x = lhs.x + rhs.x;
  temp.y = lhs.y + rhs.y;
  return temp;
}

CVector operator- (const CVector& lhs, const CVector& rhs) {
  CVector temp;
  temp.x = lhs.x - rhs.x;
  temp.y = lhs.y - rhs.y;
  return temp;
}

int operator* (const CVector& lhs, const CVector& rhs) {
  int temp;
  temp = (lhs.x * rhs.x) + (lhs.y * rhs.y);
  return temp;
}

bool operator|= (const CVector& lhs, const CVector& rhs) {
  if((lhs.x * rhs.x) + (lhs.y * rhs.y) == 0){
      return true;
  }
  else {
      return false;
  }
}
