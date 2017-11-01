#include <iostream>
using namespace std;

void color(int & ,int & ,int &);
void swap(int &, int &, int &);

int main()
{
        //DO NOT CHANGE WITHIN THIS AREA...
        int red, blue, green;
        cout<<"Enter Red, Green, and Blue values: ";
        cin>>red>>green>>blue;
        //...END OF "DO NOT CHANGE" AREA

        cout<<"The order of the three colors are: "<<endl;

        color(red,green,blue);

        //DO NOT CHANGE WITHIN THIS AREA...
        cout<<"Rearranged....\n";
        cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
        return 0;
        //...END OF "DO NOT CHANGE" AREA
}
void color(int& red,int& green,int& blue)
{
        if(red>green) {
                int temp = red;
                red = green;
                green = temp;
        }
        if(red>blue) {
                int temp = red;
                red=blue;
                blue= temp;
        }
        if(green>blue){
                int temp = green;
                green= blue;
                blue = temp;
        }
        return;
}
