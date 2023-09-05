how to create siomple BMI calculator in cPlusPlus
// just create some two variables Heigth(h) and Weight(w), with float data types
// Take them input from the user
// put thse values in a fomrula which is : BMI = weight/height*height
// print the resutlts to the user
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  float w,h;
cout<<"Enter your weight in Kg: "<<endl;
cin>>w;
cout<<"Enter your Height in meter : "<<endl;
cin>>h;
float BMI = w/(pow(h,2));
cout<<"Your BMI is " << BMI <<endl;
}
