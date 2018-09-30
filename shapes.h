/* 
shapes.h
*/

#ifndef SHAPES_H
#define SHAPES_H

class Box
{
public:

    Box( );  // default constructor 
    Box(float l, float w,  float h);  // Parametrized constructor 
    ~Box( );  // destructor
    Box (const Box &a);	// copy constructor
    Box& operator =(const Box &o);  // assignment operator
    float Volume() const;  // returns volume of box object  
    
private: 
    float length_, width_, height_;
};
#endif;



#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
public:

    Cylinder( );  // default constructor 
    Cylinder(float l, float r);  // Parametrized constructor 
    ~Cylinder( );  // destructor
    Cylinder (const Cylinder &a);	// copy constructor
    Cylinder& operator =(const Cylinder &o);  // assignment operator
    float Volume() const;  // returns volume of cylinder object  
    
private: 
    float length_, radius_;
};
#endif;



#ifndef PLANE_H
#define PLANE_H

class Plane
{
public:

    Plane( );  // default constructor 
    Plane(float l, float w);  // Parametrized constructor 
    ~Plane( );  // destructor
    Plane (const Plane &a);	// copy constructor
    Plane& operator =(const Plane &o);  // assignment operator
    float Area() const; // returns area of plane object  

private: 
    float length_, width_;
};
#endif;


