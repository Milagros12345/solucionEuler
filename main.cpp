#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
void multipos(){
    cout<<"ejercicio 1 la suma de multiplos 3,5 "<<endl;
     long long  mul=0,co=1,n1=1000;
     while(co<n1)
     {
         if((co%3==0) || (co%5==0))
         {
             mul+=co;
         }
         co++;
     }
     cout<<mul<<endl;
}
void fivonaci(){
    int n,par,suma=0;
    long long int f1=1,f2=1,f3=1;
    for(n=0;n<33;n++){
        f1=f2;
        f2=f3;
        f3=f1+f2;
        if(f2<4000000){
            par=f2%2;
            if(par==0){
                suma+=f2;
            }
            }
        }
        cout<<"suma pares"<<suma<<endl;
    }
long long int primo(){
    long long int pri=600851475143,c3=1,b3;
    while(c3<pri)
    {
        b3=0;
        for(int i=1;i<=c3;i++)
        {
            if(c3%i==0)
                b3++;
        }
        if (b3==2)
        {
            if(pri%c3==0)
            {
                cout<<c3<<"\t"<<endl;
            }
        }
        c3++;
    }
}
long long sumafact(){
    long int p=2000000,b,c=2,i,s=0;
    while(c<p){
        b=0;
        for(int i=1;i<p;i++){
            if(c%i==0){
                b++;
            }
        }
        if(b==2){
            s=s+c;
        }
        c++;
   }
   cout<<s<<endl;
}
int ispalindrome(int n){//podemos utilizar tambien los unsigned para positivos
    int reversed=0,t=n;
    while(t){
        reversed=10*reversed +(t%10);
        t=t/10;
    }
    return reversed==n;
}
int maxpali(){
    int i,j,max=0;
    for(i=100;i<=999;i++){
        for(j=100;j<=999;j++){
            int p=j*i;
            if (ispalindrome(p) && p> max){
                max=p;
            }
        }
    }
    cout<<max;
}
unsigned long mcd(long x,long y){
    unsigned long a;
    if(x>y){
        unsigned long t=x;
        x=y;
        y=t;
    }
    while(a=x%y){
        x=y;
        y=a;
    }
    return y;
}
unsigned long div(long x, long y){
    unsigned long long p=(long long)x*y;
    return p/mcd(x,y);
    }
int pequediv(){
    long s=1,i;
    for(i=1;i<=20;i++){
        s=div(s,i);
    }
    cout<<s<<endl;
    return 0;
}
int comprobacion(){
    unsigned int i,a=232792560,c=0;//solo los + numeros
    for(i=1;i<=20;i++){
        if(a%i==0)
        {c++;
        cout<<c<<endl;
        }
    }
}
int divSuma(){
    int e=2;
    int scua=0,sele,res,resl=0;
    for(unsigned int i=1;i<=100;i++){
        res=pow(i,e);
        scua+=res;
    }
    cout<<scua<<endl;
    for(unsigned int j=1;j<=100;j++){
        resl+=j;
        sele=pow(resl,e);
    }
    cout<<sele<<endl;
    cout<<"la diferencia entre "<<sele<<" y "<<scua<<" es :"<<(sele-scua)<<endl;
    }
int maxPrimo(){
    int p,c=0,n=10001,i;
    for(int i=2;0<n;i++){
        bool isp=true;
        for(int j=2;j<i;j++){
        if(i%j==0){
            isp=false;
            break;
        }
        }
        if(isp){
        --n;
        cout<<i<<endl;
        }
    }
  return 0;
}
int triplite(){
    int a, b,res=1000;
    for (a = 1; a <= res/3; a++) {
        for (b = a; b <= res/2; b++) {
            int c = (res - a - b);
            if (a*a + b*b == c*c) {
                cout<<( a * b * c)<<endl;;
                cout<<a<<"  "<<b<<"  "<<c;
        }
        }
    }
  return 0;
}
int main()
{
    multipos();//problema 1
    fivonaci();//problema 2
    primo();//problema 3
    maxpali();//problema 4
    pequediv();//problema 5
    divSuma();//problema 6
    maxPrimo();//problema 7
    triplite();//problema 9
    sumafact();//problema 10
    return 0;
}


