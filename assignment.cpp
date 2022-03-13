#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

class area
{
        float ar;
        public:
                area(float r)
                {
                        ar=3.14*r*r;
                }
                area(float l, float b)
                {
                        ar=l*b;
                }
                area(float a, float b, float c)
                {
                        float s;
                        s=(a+b+c)/2;
                        ar=s*(s-a)*(s-b)*(s-c);
                        ar=pow(ar,0.5);
                }
                void display()
                {
                        cout<<"\n Area : "<<ar;
                }

};