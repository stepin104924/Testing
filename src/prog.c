#include <operation.h>
float EQ1()
{
    char temp;
    printf("Which value you want to find");
    scanf(" %c",&temp);
    if(temp=='v'||temp=='V')
    {
       float V,U,A,T;
       printf("Enter the value of initial Velocity");
       scanf("%f",&U);
       printf("Enter the value of Acceleration");
       scanf("%f",&A);
       printf("Enter the value of Time");
       scanf("%f",&T);
       return U+A*T;
    }
   else if(temp=='u'||temp=='U')
    {
       float V,U,A,T;
       printf("Enter the value of Final Velocity");
       scanf("%f",&V);
       printf("Enter the value of Acceleration");
       scanf("%f",&A);
       printf("Enter the value of Time");
       scanf("%f",&T);
       return V-A*T;
    }
   else if(temp=='T'||temp=='t')
    {
       float V,U,A,T;
       printf("Enter the value of initial Velocity");
       scanf("%f",&U);
       printf("Enter the value of Acceleration");
       scanf("%f",&A);
       printf("Enter the value of Final Velocity");
       scanf("%f",&V);
       return (V-U)/T;
    }
    else if(temp=='a'||temp=='A')
    {
       float V,U,A,T;
       printf("Enter the value of initial Velocity");
       scanf("%f",&U);
       printf("Enter the value of Final Velocity");
       scanf("%f",&V);
       printf("Enter the value of Time");
       scanf("%f",&T);
       return (V-U)/T;
    }

}


float EQ2()
{
    char temp;
    printf("Which value you want to find");
    scanf(" %c",&temp);
    if(temp=='s'||temp=='S')
    {
       float S,U,A,T;
       printf("Enter the value of initial Velocity");
       scanf("%f",&U);
       printf("Enter the value of Acceleration");
       scanf("%f",&A);
       printf("Enter the value of Time");
       scanf("%f",&T);
       return U*T+0.5*A*T*T;
    }
   else if(temp=='u'||temp=='U')
    {
       float S,U,A,T;
       printf("Enter the value of Distance");
       scanf("%f",&S);
       printf("Enter the value of Acceleration");
       scanf("%f",&A);
       printf("Enter the value of Time");
       scanf("%f",&T);
       U=(S-0.5*A*T*T);
       return U/T;
    }
   else if(temp=='A'||temp=='a')
    {
       float S,U,A,T;
       printf("Enter the value of initial Velocity");
       scanf("%f",&U);
       printf("Enter the value of Distance");
       scanf("%f",&S);
       printf("Enter the value of Time");
       scanf("%f",&T);
       A =2.0*(S-U*T)/(T*T);
       return A;
    }
    else if(temp=='T'||temp=='t')
    {
       float S,U,V;
       float temp2;
       printf("Enter the value of initial Velocity");
       scanf("%f",&U);
       printf("Enter the value of Displacement");
       scanf("%f",&S);
       printf("Enter the value of Final velocity");
       scanf("%f",&V);
       //temp2=(S-0.5(V-U))/U;
       return temp2;
    }

}

float EQ3()
{
    char temp;
    printf("Which value you want to find");
    scanf(" %c",&temp);
    if(temp=='v'||temp=='V')
    {
       float U,A,S,V;
       printf("Enter the value of initial Velocity");
       scanf("%f",&U);
       printf("Enter the value of Acceleration");
       scanf("%f",&A);
       printf("Enter the value of Distance");
       scanf("%f",&S);
       V=sqrt(U*U+2*A*S);
       return V;
    }
   else if(temp=='u'||temp=='U')
    {
       int V,U,A,S;
       printf("Enter the value of Final Velocity");
       scanf("%f",&V);
       printf("Enter the value of Acceleration");
       scanf("%f",&A);
       printf("Enter the value of Distance");
       scanf("%f",&S);
       U=sqrt(V*V-2*A*S);
       return U;
    }
   else if(temp=='s'||temp=='S')
    {
       float V,U,A,S;
       printf("Enter the value of initial Velocity");
       scanf("%f",&U);
       printf("Enter the value of Acceleration");
       scanf("%f",&A);
       printf("Enter the value of Final Velocity");
       scanf("%f",&V);
       S=(V*V-U*U)/2*A;
       return S;
    }
    else if(temp=='a'||temp=='A')
    {
       float V,U,A,S;
       printf("Enter the value of initial Velocity");
       scanf("%f",&U);
       printf("Enter the value of Final Velocity");
       scanf("%f",&V);
       printf("Enter the value of Distance");
       scanf("%f",&S);
       A=(V*V-U*U)/2*S;
       return A;
    }

}
