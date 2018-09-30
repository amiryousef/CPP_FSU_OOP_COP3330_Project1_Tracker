/* 
vehicles.cpp 
*/

#include <iostream>
#include "vehicles.h"
#include "shapes.h"

Vehicle::Vehicle( )  // default constructor 
    {
    serialNumber_ = " ";
    passengerCapacity_ = 0;
    }

Vehicle::Vehicle(char* s, unsigned int p)  // Parametrized constructor 
    {
    serialNumber_ = s;
    passengerCapacity_ = p;
    }

Vehicle::~Vehicle( )  // destructor
    {
    std::cout << "~Vehicle( )" << std::endl;
    }

Vehicle::Vehicle (const Vehicle &a)	// copy constructor
    {
    if (this != &a)
        {
    serialNumber_ = a.serialNumber_;
    passengerCapacity_ = a.passengerCapacity_;
        }
    }

Vehicle& Vehicle::operator =(const Vehicle &o)  // assignment operator
      {
       serialNumber_ = o.serialNumber_;
       passengerCapacity_ = o.passengerCapacity_;
       return *this;
      }

const char* Vehicle::SerialNumber() const  // returns serial number 
    {
    return serialNumber_;
    }

unsigned int Vehicle::PassengerCapacity() const  // returns passenger capacity
    {
    return passengerCapacity_;
    }

float Vehicle::LoadCapacity() const  // returns 0
    {
    return 0;
    }

const char* Vehicle::ShortName() const  // returns "UNK"
    {
    return "UNK";
    }

VehicleType Vehicle::SnDecode (const char* sn) 
{
  switch (sn[0])
  { 
    case '1': return vehicle; 
    case '2': return car;
    case '3': return truck;
    case '4': return van; 
    case '5': return tanker;
    case '6': return flatbed;
    default:  return badSn;
  }
}

Car::Car( )  // default constructor 
    {
    SerialNumber();
    PassengerCapacity();
    }

Car::Car(char* s, unsigned int p)  // Parametrized constructor 
    {
    SerialNumber();
    PassengerCapacity();
    LoadCapacity();
    ShortName();
    }

Car::~Car( )  // destructor
    {
    std::cout << "~Car( )" << std::endl;
    }

Car::Car (const Car &a)	// copy constructor
    {
    if (this != &a)
        {
    SerialNumber();
    PassengerCapacity();
        }
    }

Car& Car::operator =(const Car &o)  // assignment operator
      {
       SerialNumber();
       PassengerCapacity();
       return *this;
      }

const char* Car::ShortName() const
    {
    return "CAR";
    }




Truck::Truck( )  // default constructor 
    {
    SerialNumber();
    PassengerCapacity();
    }

Truck::Truck(char* s, unsigned int p)  // Parametrized constructor 
    {
    SerialNumber();
    PassengerCapacity();
    LoadCapacity();
    ShortName();
    }

Truck::~Truck( )  // destructor
    {
    std::cout << "~Truck( )" << std::endl;
    }

Truck::Truck (const Truck &a)	// copy constructor
    {
    if (this != &a)
        {
    SerialNumber();
    PassengerCapacity();
        }
    }

Truck& Truck::operator =(const Truck &o)  // assignment operator
      {
       SerialNumber();
       PassengerCapacity();
       return *this;
      }

const char* Truck::ShortName() const  // returns "TRK"
        {
        return "TRK";
        }

const char* Truck::DOTLicense() const  // returns the license no
        {
        return DOTLicense_;
        }


Van::Van( )  // default constructor 
    {
    SerialNumber();
    PassengerCapacity();
    }

Van::Van(char* s, unsigned int p)  // Parametrized constructor 
    {
    SerialNumber();
    PassengerCapacity();
    LoadCapacity();
    ShortName();
    }

Van::~Van( )  // destructor
    {
    std::cout << "~Van( )" << std::endl;
    }

Van::Van (const Van &a)	// copy constructor
    {
    if (this != &a)
        {
    SerialNumber();
    PassengerCapacity();
        }
    }

Van& Van::operator =(const Van &o)  // assignment operator
      {
       SerialNumber();
       PassengerCapacity();
       return *this;
      }

float Van::LoadCapacity() const  // returns volume of box 
    {
    return Volume(); 
    }

const char* Van::ShortName() const  // returns "VAN"
    {
    return "VAN";
    }


Tanker::Tanker( )  // default constructor 
    {
    SerialNumber();
    PassengerCapacity();
    }

Tanker::Tanker(char* s, unsigned int p)  // Parametrized constructor 
    {
    SerialNumber();
    PassengerCapacity();
    LoadCapacity();
    ShortName();
    }

Tanker::~Tanker( )  // destructor
    {
    std::cout << "~Tanker( )" << std::endl;
    }

Tanker::Tanker (const Tanker &a)	// copy constructor
    {
    if (this != &a)
        {
    SerialNumber();
    PassengerCapacity();
        }
    }

Tanker& Tanker::operator =(const Tanker &o)  // assignment operator
      {
       SerialNumber();
       PassengerCapacity();
       return *this;
      }

float Tanker::LoadCapacity() const  // returns volume of cylinder 
    {
    return Volume();
    }

const char* Tanker::ShortName() const  // returns "TNK"
    {
    return "TNK";
    }



Flatbed::Flatbed( )  // default constructor 
    {
    SerialNumber();
    PassengerCapacity();
    }

Flatbed::Flatbed(char* s, unsigned int p)  // Parametrized constructor 
    {
    SerialNumber();
    PassengerCapacity();
    LoadCapacity();
    ShortName();
    }

Flatbed::~Flatbed( )  // destructor
    {
    std::cout << "~Flatbed( )" << std::endl;
    }

Flatbed::Flatbed (const Flatbed &a)	// copy constructor
    {
    if (this != &a)
        {
    SerialNumber();
    PassengerCapacity();
        }
    }

Flatbed& Flatbed::operator =(const Flatbed &o)  // assignment operator
      {
       SerialNumber();
       PassengerCapacity();
       return *this;
      }

float Flatbed::LoadCapacity() const  // returns area of plane 
    {
    return Area();
    }

const char* Flatbed::ShortName() const  // returns "FLT"
    {
    return "FLT";
    }

