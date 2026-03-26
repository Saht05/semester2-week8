
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    new.x=x;
    new.y=y;
    return new;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

Line makeLine(Point p1, Point p2) {
    Line line;
    line.p[0]=p1;
    line.p[1]=p2;
    return line;
}

Triangle makeTriangle(Point p1, Point p2, Point p3) {
    Triangle triangle;
    triangle.p[0]=p1;
    triangle.p[1]=p2;
    triangle.p[2]=p3;

    return triangle;
}


float lineLength(Line l) {
    float x = l.p[1].x - l.p[0].x;
    float y = l.p[1].y - l.p[0].y;
    float length=sqrt(x*x + y*y);
    return length;

}

float triangleArea(Triangle t) {
    float x0 = t.p[0].x;
    float y0 = t.p[0].y;
    float x1 = t.p[1].x;
    float y1 = t.p[1].y;
    float x2 = t.p[2].x;
    float y2 = t.p[2].y;
    float area=fabs((x0*(y1 - y2) + x1*(y2 - y0) + x2*(y0 - y1)) / 2.0);
    return area;
}

bool samePoint(Point p1, Point p2) {
    if ((p1.x ==  p2.x) && (p1.y == p2.y)){
        return 1;
    }else{
        return 0;
    }
    
}

bool pointInLine(Point p, Line l) {
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}

bool pointInTriangle(Point p, Triangle t) {
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}