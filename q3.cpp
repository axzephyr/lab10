//define the library.
#include <iostream>
using namespace std;

//initiate the class
class Rectan
{
    //initiate the objects
    public:
    double breadth;
    double length;
    //declare the functions
    double Perim(void);
    double Ara(void);
    void dimensions( double l, double b);
};
//define the functions
double Rectan::Ara(void)
{
   return length*breadth;
}
// Member functions definitions
double Rectan::Perim(void)
{
   return 2*(length+breadth);
}

void Rectan::dimensions( double l, double b)
{
   length = l;
   breadth = b;
}

// initiate the main function
int main()
{
    Rectan rect1;
    Rectan rect2;
    double ar1,ar2,per1,per2,length,breadth;

    //ask the user for the length and the breadth
    cout<<"What is the breadth of the first rectangle?: ";
    cin>>rect1.breadth;
    cout<<"What is the length of the first rectangle? : ";
    cin>>rect1.length;
    rect1.dimensions(rect1.length,rect1.breadth);

    // ask the user for the length and breadth of the second rectangle
    cout<<"What is the breadth of second rectangle? : ";
    cin>>rect2.breadth;
    cout<<"What is the length of second rectangle? : ";
    cin>>rect2.length;
    rect2.dimensions(rect2.length,rect2.breadth);
    cout<<endl;
    cout<<endl;

    // compute the area of the first rectangle
    ar1 = rect1.Ara();
    cout << "Area of the first Rectangle : " << ar1 <<endl;
    // compute the perimeter of the first rectangle
    per1 = rect1.Perim();
    cout << "Perimeter of the first Rectangle : " << per1 <<endl;
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    // compute the area of second rectangle
    ar2 = rect2.Ara();
    cout<<"Area of the second rectangle = "<<ar2<<endl;
    //compute the perimeter of second rectangle
    per2 = rect2.Perim();
    cout << "Perimeter of the second rectangle = "<<per2<<endl;
    cout<<endl;
    cout<<endl;

    //comparison of the areas
    if(ar1>ar2)
    {
        cout<<" Area of first rectangle is greater than that of the second rectangle "<<endl;
    }
   else if(ar1<ar2)
    {
        cout<<"Area of second rectangle is greater than that of the first rectangle "<<endl;
    }
   else
    {
        cout<<"Area of both the rectangles are equal "<<endl;
    }
   return 0;
}
