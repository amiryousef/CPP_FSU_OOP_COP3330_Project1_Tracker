/* 
verbose.cpp 
contain the verbose versions of the various class implementations (both shapes and vehicles). 
Amir Yousef - cop3330 - fall11 - proj1
*/

#include <shapes.h>
#include <vehicles.h>

Box::Box()
{
  length_ = 0;
  width_ = 0;
  height_ = 0;

  std::cout << "Box()" << std::endl;
}

Box::Box(float l, float w,  float h)
{
  length_ = l;
  width_ = w;
  height_ = h;

  std::cout << "Box()" << std::endl;
}

Box::~Box()
{
  std::cout << "~Box()" << std::endl;
}

Box::Box(const Box& b)
{
  length_ = b.length_;
  width_ = b.width_;
  height_ = b.height_;

  std::cout << "Box()" << std::endl;
}

Box& Box::operator=(const Box& b)
{
  if (this != &b)
    {
      length_ = b.length_;
      width_ = b.width_;
      height_ = b.height_;
    }
  
  return *this;
}

float Box::Volume() const
{
  return length_ * width_ * height_;
}

Cylinder::Cylinder()
{
  length_ = 0;
  radius_ = 0;

  std::cout << "Cylinder()" << std::endl;
}

Cylinder::Cylinder(float l, float r)
{
  length_ = l;
  radius_ = r;

  std::cout << "Cylinder()" << std::endl;
}

Cylinder::~Cylinder()
{
  std::cout << "~Cylinder()" << std::endl;
}

Cylinder::Cylinder(const Cylinder& c)
{
  length_ = c.length_;
  radius_ = c.radius_;

  std::cout << "Cylinder()" << std::endl;
}

Cylinder& Cylinder::operator=(const Cylinder& c)
{
  if (this != &c)
    {
      length_ = c.length_;
      radius_ = c.radius_;
    }

  return *this;
}

float Cylinder::Volume() const
{
  return PI * length_ * radius_ * radius_;
}

Plane::Plane()
{
  length_ = 0;
  width_ = 0;
  
  std::cout << "Plane()" << std::endl;
}

Plane::Plane(float l, float w)
{
  length_ = l;
  width_ = w;

  std::cout << "Plane()" << std::endl;
}

Plane::~Plane()
{
  std::cout << "~Plane()" << std::endl;
}

Plane::Plane (const Plane& p)
{
  length_ = p.length_;
  width_ = p.width_;

  std::cout << "Plane()" << std::endl;
}

Plane& Plane::operator=(const Plane& p)
{
  if (this != &p)
    {   
      length_ = p.length_;
      width_ = p.width_;
    }

  return *this;
}

float Plane::Area() const
{
  return length_ * width_;
}

Vehicle::Vehicle()
{
  serialNumber_ = new char[1];
  serialNumber_[0] = 0;
  passengerCapacity_ = 0;

  std::cout << "Vehicle()" << std::endl;
}

Vehicle::Vehicle(const char* s, unsigned int p)
{
  serialNumber_ = new char[strlen(s) + 1];
  strcpy(serialNumber_, s);
  passengerCapacity_ = p;

  std::cout << "Vehicle()" << std::endl;
}

Vehicle::~Vehicle()
{
  delete [] serialNumber_;
  serialNumber_ = NULL;

  std::cout << "~Vehicle()" << std::endl;
}

const char* Vehicle::SerialNumber() const
{
  return serialNumber_;
}

unsigned int Vehicle::PassengerCapacity() const
{
  return passengerCapacity_;
}

float Vehicle::LoadCapacity() const
{
  return 0;
}

const char* Vehicle::ShortName() const
{
  return "UNK";
}

VehicleType Vehicle::SnDecode(const char* sn) 
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

Car::Car() : Vehicle()
{
  std::cout << "Car()" << std::endl;
}

Car::Car(const char* s, unsigned int p) : Vehicle(s, p)
{
  std::cout << "Car()" << std::endl;
}

Car::~Car()
{
  std::cout << "~Car()" << std::endl;
}

const char* Car::ShortName() const
{
  return "CAR";
}

Truck::Truck() : Vehicle()
{
  DOTLicense_ = new char[1];
  DOTLicense_[0] = 0;

  std::cout << "Truck()" << std::endl;
}

Truck::Truck(const char* s, unsigned int p, const char* d) : Vehicle(s, p)
{
  DOTLicense_ = new char[strlen(d) + 1];
  strcpy(DOTLicense_, d);

  std::cout << "Truck()" << std::endl;
}

Truck::~Truck()
{
  delete [] DOTLicense_;
  DOTLicense_ = NULL;

  std::cout << "~Truck()" << std::endl;
}

const char* Truck::ShortName() const
{
  return "TRK";
}

const char* Truck::DOTLicense() const
{
  return DOTLicense_;
}

Van::Van() : Truck(), Box()
{
  std::cout << "Van()" << std::endl;
}

Van::Van(const char* s, unsigned int p, const char* d, float l, float w, 
         float h) : Truck(s, p, d), Box(l, w, h)
{
  std::cout << "Van()" << std::endl;
}

Van::~Van()
{
  std::cout << "~Van()" << std::endl;
}

float Van::LoadCapacity() const
{
  return Volume(); 
}

const char* Van::ShortName() const
{
  return "VAN";
}

Tanker::Tanker() : Truck(), Cylinder()
{
  std::cout << "Tanker()" << std::endl;
}

Tanker::Tanker(const char* s, unsigned int p, const char* d, float l, float r)
  : Truck(s, p, d), Cylinder(l, r)
{
  std::cout << "Tanker()" << std::endl;
}

Tanker::~Tanker()
{
  std::cout << "~Tanker()" << std::endl;
}

float Tanker::LoadCapacity() const
{
  return Volume();
}

const char* Tanker::ShortName() const
{
  return "TNK";
}

Flatbed::Flatbed() : Truck(), Plane()
{
  std::cout << "Flatbed()" << std::endl;
}

Flatbed::Flatbed(const char* s, unsigned int p, const char* d, float l, float w)
  : Truck(s, p, d), Plane(l, w)
{
  std::cout << "Flatbed()" << std::endl;
}

Flatbed::~Flatbed()
{
  std::cout << "~Flatbed()" << std::endl;
}

float Flatbed::LoadCapacity() const
{
  return Area();
}

const char* Flatbed::ShortName() const
{
  return "FLT";
}
