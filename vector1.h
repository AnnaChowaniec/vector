#ifndef VECTOR1_H
#define VECTOR1_H

class CVector {
  public:
    int x,y;
    CVector () {}
    CVector (int a, int b) : x(a), y(b) {}
};

CVector operator+ (const CVector& lhs, const CVector& rhs);

CVector operator- (const CVector& lhs, const CVector& rhs);

int operator* (const CVector& lhs, const CVector& rhs);

bool operator|= (const CVector& lhs, const CVector& rhs);

#endif // VECTOR1_H
