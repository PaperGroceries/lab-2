//
//  main.cpp
//  lab 2
//
//  Created by Aim Kim on 2022-05-25.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    
    do
    {
        int a,b,c,d;
        double x1,x2;
        
        cout << "Please enter a,b,c\n";
        cin >> a >> b >> c;
        
        if (a == 0)
        {
            //somthing
            cout << " Unfortunately, the function is not quadratic\n";
            if (b == 0)
            {
                cout << " a = 0\t b = 0\n Bye\n";
            }
            else
            {
                x1 = -1*c/b;
                cout << "x1 is equal to\t"<< x1;
            }
            
        }
        else
        {
            d = (b*b) - (4*a*c);
            if (d < 0)
            {
                cout << "No Real Answer\nFail to take the square root of Negative value\n";
            }
            else
            {
                x1 = (-1*b + sqrt(d))/(2*a);
                x2 = (-1*b - sqrt(d))/(2*a);
                
                cout << "The two roots\n";
                cout <<"x1 is equal to:\n" << x1 <<endl;
                cout <<"x2 is equal to:\n" << x2 <<endl;
            }
        
        }
        
        
        
        
        cout<<"Please enter your choice" << endl;
        cout<<"1 - To solve a quadratic equation" << endl ;
        cout<<"Press anything To exit" << endl;
        cin >> x;
        
    }
    while (x==1);

    cout << "Bye"<< endl ;
    return 0;
}
