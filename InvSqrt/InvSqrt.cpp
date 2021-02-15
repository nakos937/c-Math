// Keszitette:  Nagy Ákos
// Email:       nakos1212@protonmail.com
#include<iostream>
using namespace std;

float calcInvSqRoot( float n ) {
   
   const float threehalfs = 1.5F;
   float y = n;
   
   long i = * ( long * ) &y;

   i = 0x5f3759df - ( i >> 1 );
   y = * ( float * ) &i;
   
   y = y * ( threehalfs - ( (n * 0.5F) * y * y ) );
   
   return y;
}

int main(){
   
   int n = 256;
   float invSqRoot = calcInvSqRoot(n);
   cout<< "<<n<<" -> "<<invSqRoot;
   
   return 0;
}