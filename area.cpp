#include<iostream>
using namespace std;

double calcarea(double length, double width)
{
 return length*width;
}

int main()
{
 double area,length,width;
 cout<<"\nTo find the area of rectangle-"<<endl;
 cout<<"\n Enter the length of rectangle-";
 cin>>length;
 cout<<"\nEnter the width of the rectangle-";
 cin>>width;
 area=calcarea(length,width);
 cout<<"\nThe area of the rectangle is "<<area<<endl;
 return 0;
}  
