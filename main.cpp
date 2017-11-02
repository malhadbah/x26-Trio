#include <iostream>
using namespace std;

void color(int & ,int & ,int &);

int main()
{
        //DO NOT CHANGE WITHIN THIS AREA...
        int red, blue, green;
        cout<<"Enter Red, Green, and Blue values: ";
        cin>>red>>green>>blue;
        //...END OF "DO NOT CHANGE" AREA
        color(red,green,blue);

        //DO NOT CHANGE WITHIN THIS AREA...
        cout<<"Rearranged....\n";
        cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
        return 0;
        //...END OF "DO NOT CHANGE" AREA
}

void color(int& red,int& green,int& blue)

{

        if(red>green && green>blue){//321
        red=red;
        green=green;
        blue=blue;}
                
       
        else if(red>blue && green<blue) {//312
         int temp=green;
          red=red;
          green=blue;
          blue=temp;
          }
          else if(red<green && red>blue){ //231
          int temp=red;
          red=green;
          blue=blue;
          green=temp;//temp=2 in this case
          }
          else if(red>green && red<blue){//213
          int temp=red;
          red=blue;
          blue=green;
          green=temp;
          }
          else if(red<green && green<blue){//123
          int temp=red;
          red=blue;
          green=green;
          blue=temp;
          }
          else if(red<blue && blue<green){//132
          int temp=red;
          red=green;
          green=blue;
          blue=temp;
          }
          }

