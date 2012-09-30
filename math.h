#ifndef MATH_H
#define MATH_H
#include <math.h>
#define PI 3.14159265358979323846
#include <cstdlib>  // For srand() and rand()

class Vector2 {
private:
  double A, B;
public:
  Vector2();
  Vector2(double A, double B);
  double x();
  double y();
  Vector2 operator+(Vector2& other);
  Vector2 operator-(Vector2& other);
  Vector2 operator*(const double& scalar);
  Vector2 operator/(const double& scalar);
  static double dotProduct(Vector2& V0, Vector2& V1);
  
};

bool intersects(Vector2 A, Vector2 B, Vector2 C, Vector2 D, Vector2 &intersection);
bool intersectsRect(Vector2 A, Vector2 B, double x, double y, double width, double height);
bool contains(double x0, double y0, double x1, double y1, double test_x, double test_y);
double distance(Vector2 v0, Vector2 v1);
double distance(double x0, double y0, double x1, double y1);
double randn_notrig(double mu=0.0, double sigma=1.0);
double randn_trig(double mu=0.0, double sigma=1.0);
bool is_nan(double val);
double d_abs(double val);

#endif //MATH_H