/* 
vehicles.h
*/

#ifndef VEHICLE_H
#define VEHICLE_H
#include "shapes.h"
typedef char VehicleType; 
class Vehicle
{
public:
    Vehicle( );  // default constructor 
    Vehicle(char* s, unsigned int p);  // Parametrized constructor 
    virtual ~Vehicle( );  // destructor
    Vehicle (const Vehicle &a);  // copy constructor
    Vehicle& operator =(const Vehicle &o);   // assignment operator
    const char* SerialNumber() const;  // returns serial number 
    unsigned int PassengerCapacity() const;  // returns passenger capacity 
    float LoadCapacity() const;  // returns 0
    const char* ShortName() const;  // returns "UNK"
	static VehicleType SnDecode (const char* sn);  
private: 
    char* serialNumber_;
    unsigned int passengerCapacity_;
};
#endif;

#ifndef CAR_H
#define CAR_H

class Car : public Vehicle
{
public:
    Car( );  // default constructor 
    Car(char* s, unsigned int p);  // Parametrized constructor 
    virtual ~Car( );  // destructor
    Car (const Car &a);  // copy constructor
    Car& operator =(const Car &o);   // assignment operator
    const char* ShortName() const; // returns "CAR" 
};
#endif;


#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Vehicle
{
public:
    Truck( );  // default constructor 
    Truck(char* s, unsigned int p);  // Parametrized constructor 
    ~Truck( );  // destructor
    Truck (const Truck &a);  // copy constructor
    Truck& operator =(const Truck &o);   // assignment operator
    const char* ShortName() const;  // returns "TRK"
    const char* DOTLicense() const;  // returns the license no
private:
  char* DOTLicense_; 
};
#endif;


#ifndef VAN_H
#define VAN_H

class Van : public Truck , Box  
{
public:
  Van( );  // default constructor 
  Van(char* s, unsigned int p);  // Parametrized constructor 
  ~Van( );  // destructor
  Van (const Van &a);  // copy constructor
  Van& operator =(const Van &o);   // assignment operator
  float LoadCapacity() const;  // returns volume of box  
  const char* ShortName() const;  // returns "VAN"
};
#endif;


#ifndef TANKER_H
#define TANKER_H

class Tanker : public Truck , Cylinder 
{
public:
  Tanker( );  // default constructor 
  Tanker(char* s, unsigned int p);  // Parametrized constructor 
  ~Tanker( );  // destructor
  Tanker (const Tanker &a);  // copy constructor
  Tanker& operator =(const Tanker &o);   // assignment operator
  float LoadCapacity() const;  // returns volume of cylinder  
  const char* ShortName() const;  // returns "TNK"
};
#endif;



#ifndef FLATBED_H
#define FLATBED_H

class Flatbed : public Truck , Plane  
{
public:
  Flatbed( );  // default constructor 
  Flatbed(char* s, unsigned int p);  // Parametrized constructor 
  ~Flatbed( );  // destructor
  Flatbed (const Flatbed &a);  // copy constructor
  Flatbed& operator =(const Flatbed &o);   // assignment operator
  float LoadCapacity() const;  // returns area of plane  
  const char* ShortName() const;  // returns "FLT"
};
#endif;