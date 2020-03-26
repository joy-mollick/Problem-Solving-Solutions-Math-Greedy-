#include<bits/stdc++.h>

using namespace std;

/// Use sort

/*
Heron-type formula for the volume of a tetrahedron
If U, V, W, u, v, w are lengths of edges of the tetrahedron (first three form a triangle; u opposite to U and so on), then

    volume=\/(-a+b+c+d)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d)
                            192*u*v*w
where
a=\/xYZ  b=\/yZX    c=\/zXY  d=\/xyz
X=(w-U+v)*(U+v+w)
x=(U-v+w)*(v-w+U)
Y=(u-V+w)*(V+w+u)
y=(V-w+u)*(w-u+V)
Z=(v-W+u)*(W+u+v)
z=(W-u+v)*(u-v+W)

*/

typedef long long ll;

int main()

{
   int tc;
   scanf("%d",&tc);
   while(tc--)
   {
     double U,V,W,u,v,w;
     scanf("%lf%lf%lf%lf%lf%lf",&u,&v,&w,&W,&V,&U);
    double X=(w-U+v)*(U+v+w) ;
    double x=(U-v+w)*(v-w+U);
    double Y=(u-V+w)*(V+w+u);
    double y=(V-w+u)*(w-u+V);
   double Z=(v-W+u)*(W+u+v);
    double z=(W-u+v)*(u-v+W);
    double a=sqrt(x*Y*Z);
    double  b=sqrt(y*Z*X) ;
    double c=sqrt(z*X*Y);
    double d=sqrt(x*y*z);
    double volume=sqrt((-a+b+c+d)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d));
    volume=volume/(192*u*v*w);
    printf("%.4lf\n",volume);
   }
   return 0;
}
