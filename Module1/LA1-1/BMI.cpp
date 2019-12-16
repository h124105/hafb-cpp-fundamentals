#include <iostream>
#include <cmath>
using namespace std;
int main()
{
// calculate BMI = Weight in Kg divided by Height, in meteres squared
// floating point variables: float, double 
float weight=0, height=0, BMI=0;
cout << "how heavy are you in Kg?" <<endl;
cin >>weight;
cout << "how tall are you in M" <<endl;
cin >> height;
BMI = weight/(height*height);

const float lowBMI =18.5;
const float lowMed = 18.6;
const float highMed = 24.9;
const float lowFatASS = 25;
const float highFatASS =29.9;
const float Killself =30;


if (BMI<=lowBMI)
{
    cout << "your BMI is " << round(BMI) <<  ", eat more food" <<endl;
    
}
else if (BMI>lowMed && BMI < highMed)
{
    cout << "your BMI is " << round(BMI) << ", Not bad " <<endl;

}
else if (BMI>lowFatASS && BMI < highFatASS)
{
    cout << "your BMI is " << round(BMI) << ", fat ass " <<endl;

}
else if ( BMI > Killself)
{ 
    cout << "your BMI is " <<round(BMI) << ", kill yourself" << endl;
}
return 0;
}