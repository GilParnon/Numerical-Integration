#include "rk4.h"
///////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////     Implementation of quadratics /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

float ** Function::rk4(float * iv, const int TIME)
{
    float k1;
    float k2;
    float k3;
    float k4;
    float y;
    float val;
    float ** pts = new float*[TIME];

    pts[0] = new float[2]; 
    pts[0][0] = iv[0]; pts[0][1] = iv[1];
    for(int t = 0; t < TIME; ++t)
    {
        pts[t+1] = new float[2];
        pts[t][0] = t+iv[0];
        
        y = pts[t][1];

        k1 = f(t+iv[0],y);
        k2 = f(t+iv[0] + (1/2),y+(k1/2));
        k3 = f(t+iv[0] + (1/2),y+(k2/2));
        k4 = f(t+iv[0]+1,y+k3);

        if(t+1 < TIME)
        {
            val = y + (k1+2*k2 + 2*k3 + k4)/6;
            pts[t+1][1] = val;
        }
    }
    return pts;
}

float Function::f(const float t, const float y)
{
    float val =  (-1)*y*cos(t);
    return val;
}

Function::Function(float a_, float b_, float c_)
{
    a = a_; b = b_; c = c_;
}
