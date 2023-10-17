#include <iostream>
using namespace std;


    class date{
        int d = dd;
        int m = mm;
        int y = yy;


        //date()  {};
        date( int dd ,int mm, int yy)  //constructor
        {
            cout<<"constructor called"<<endl;
            d = 26;
            m = 8;
            y = 2023;

        }


        ~date(){
                cout<<"Destructor Called"<<endl;

        };      //destructor
   };

     main()
    {
        date d1(26,8,2023) , d2(d1) ,d3, d4;
        //date d;    //function that auto gets called when you declare an object ; same as the class (name) ; no return value

        for(;;)
        {
            int i;
            date d2;
        }
    }
    