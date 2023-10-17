
#include <iostream>
using namespace std;
class library
{
    int bname[100],bissued[100],breserv[100],n,i,j;
    public:
    void input()
    {
        int prn;
        cout<<"Enter your PRN : "<<endl;
        cin>>prn;
    }
    public:
    void issued()
    {
        cout<<"How many books you want to issue : "<<endl;
        cin>>n;
        if (n<=100)
        {
            for(i=0;i<n;i++)
            {
                cin>>bname[i];
                cin>>bissued[i];
            }
        }
        else
        cout<<"No. of books exceeded."<<endl;

    }
    void reserved()
    {
        cout<<"Enter the book you want to reserve : "<<endl;
        for(i=0;i<100;i++)
        {
            for(j=0;j<100;j++)
            {
                if(bissued[i]=breserv[j])
                {
                    cout<<"The book is already issued"<<endl;
                }
                else
                cin>>breserv[i];
            }
        }
    }
};
main()
{
    library s1;
    s1.input();
    int choice;
    while(1)
    {
        cout<<"1.Student issues a book"<<endl;
        cout<<"2.Student reserves a book"<<endl;
        cout<<"3.Student returns a book"<<endl;
        cout<<"4.Library gets a new book"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter a choice : "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            s1.issued();
            break;

            case 2:
            break;

        }
    }
}