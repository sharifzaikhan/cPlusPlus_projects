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
