#include <iostream>

using namespace std;


int multiplos3_5()
{
    int suma=0;
   for(int i=0; i<1000;i++)
   {
    if(i%3==0 || i%5==0){
    suma+=i;
    }
   }
    return suma;
}


int SumaParFib()
{
    int ant=0;
    int ant1=1;
    int SumaFib=0;
    int n=35;
    int sumaPar=0;

    for(int k=0; k<n; k++)
    {
        SumaFib=ant+ant1;
        ant1=ant;
        ant=SumaFib;
        cout<<SumaFib<<'\t';
    if(SumaFib%2==0)
    {
    sumaPar+=SumaFib;
    }
    }
    return sumaPar;
}

int FactorPrimoML(int n)
{

}
int main()
{
    cout<<multiplos3_5()<<'\n';
    cout<<'\n'<<SumaParFib()<<'\n';
    return 0;
}
