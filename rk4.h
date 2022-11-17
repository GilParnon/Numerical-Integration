#include <iostream>
#include <math.h>
//Class definition for points

//This is the RHS for 
class Function 
{
    public:
    // Function();
    // Function(float a_);
    // Function(float a_, float c_);
    Function(float a_, float b_, float c_);
    float ** rk4(float * iv, const int time); //t is the number of timesteps
    float f(const float t, const float y);

    //Data
    float a; float b; float c;
};
