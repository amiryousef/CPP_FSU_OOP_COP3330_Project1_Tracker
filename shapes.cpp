/* 
shapes.cpp 
*/

#include <iostream>
#include "shapes.h"

Box::Box( )  // default constructor 
    {
    length_ = 0;
    width_ = 0;
    height_ = 0;
    }

Box::Box(float l, float w,  float h)  // Parametrized constructor 
    {
    length_ = l;
    width_ = w;
    height_ = h;
    }

Box::~Box( )  // destructor
    {
    std::cout << "~Box( )" << std::endl;
    }

Box::Box (const Box &a)	  // copy constructor
    {
    if (this != &a)
        {
    length_ = a.length_;
    width_ = a.width_;
    height_ = a.height_;
        }
    }

Box& Box::operator =(const Box &o)   // assignment operator
    {
	if (this != &o)
		{
     length_ = o.length_;
     width_ = o.width_;
     height_ = o.height_;
	    }
       return *this;
    }

float Box::Volume() const   // returns volume of box object  
    {
    return length_ * width_ * height_;
    }

Cylinder::Cylinder( )  // default constructor 
    {
    length_ = 0;
    radius_ = 0;
    }

Cylinder::Cylinder(float l, float r)  // Parametrized constructor 
    {
    length_ = l;
    radius_ = r;
    }

Cylinder::~Cylinder( )  // destructor
    {
    std::cout << "~Cylinder( )" << std::endl;
    }

Cylinder::Cylinder (const Cylinder &a)	 // copy constructor
    {
    if (this != &a)
        {
    length_ = a.length_;
    radius_ = a.radius_;
        }
    }

Cylinder& Cylinder::operator =(const Cylinder &o)   // assignment operator
      {
      if (this != &o)
          {
       length_ = o.length_;
       radius_ = o.radius_;
	      }
       return *this;
      }

float Cylinder::Volume() const   // returns volume of box object  
    {
    return (float) 3.14159 * length_ * radius_ * radius_;
    }

Plane::Plane( )  // default constructor 
    {
    length_ = 0;
    width_ = 0;
    }

Plane::Plane(float l, float w)  // Parametrized constructor 
    {
    length_ = l;
    width_ = w;
    }

Plane::~Plane( )  // destructor
    {
    std::cout << "~Plane( )" << std::endl;
    }

Plane::Plane (const Plane &a)	// copy constructor
    {
    if (this != &a)
        {
    length_ = a.length_;
    width_ = a.width_;
        }
    }

Plane& Plane::operator =(const Plane &o)  // assignment operator
    {
    if (this != &o)
        {   
	length_ = o.length_;
    width_ = o.width_;
		}
       return *this;
    }

float Plane::Area() const  // returns area of plane object  
    {
    return length_ * width_;
    }






