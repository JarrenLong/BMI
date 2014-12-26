#include "stdafx.h"

#define U "Underweight"
#define N "Normal"
#define Ov "Overweight"
#define O "Obese"

using namespace std;

int main(int argc, char *argv[])
{
    int height,weight,bmi;
    char *status;
    cout<<"Body Mass Index Calculator"<<endl;
    cout<<"=========================="<<endl;
    cout<<"Enter height (in inches): "; cin>>height;
    cout<<"Enter weight (in pounds): "; cin>>weight;
    bmi=(((weight*7030)/(height*height))/10);
    cout<<"You're Body Mass Index is: "<<bmi<<endl;
    if(bmi<=18.5){status=U;}
    if(bmi>18.5&&bmi<=24.9){status=N;}
    if(bmi>=25&&bmi<=29.9){status=Ov;}
    if(bmi>=30){status=O;}
    cout<<"You are in the "<<status<<" weight category!"<<endl;
    system("PAUSE");
    return 0;
}
