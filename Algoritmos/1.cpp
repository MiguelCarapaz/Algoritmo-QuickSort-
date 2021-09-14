#include <iostream>
#include <iomanip>
#include "1.h"
using namespace std;
int mitad (int a[],int pini, int pfin)
{
    return a[(pini+pfin)/2];
}
void ordenar (int a[],int pini, int pfin)
{
    int i=pini;
    int j=pfin;
    int temp;
    int piv=mitad(a,pini,pfin);
    do
    {
        while(a[i]<piv)
        {
            i++;
        }
        while(a[j]>piv)
        {
            j--;
        }
        if(i<=j)
        {
            temp =a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(pini<j)
    {
        ordenar(a,pini,j);
    }
    if(i<pfin)
    {
      ordenar(a,i,pfin);
    }
}

