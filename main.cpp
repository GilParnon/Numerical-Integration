#include "rk4.h"
#include <iostream>
#include <cstdlib> 

int main()
{
    const int TIME = 100;
    const float t = 0;
    const float y = 4;
    float ** points;
    points = new float *[TIME];
    for(int i = 0; i < TIME; ++i)
    {
        points[i] = new float[2];    
    } 
    float iv[2] = {2,.5};
    Function xSquare(1,2,3);
    points = xSquare.rk4(iv,TIME);

    for(int i = 0; i < TIME; ++i)
    {
        std:: cout << points[i][1]  << std::endl;    
    }
    for(int i = 0; i < TIME; ++i)
    {
        delete [] points[i];    
    } 
    // delete [] points;
    return 0;
}