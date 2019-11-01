/*
 * Author: Pablo Miguel Climent Gonzálvez
 * Date: 1/11/2019
 * Definitive version
 * 
 * This program asks the user for 10 positive integer number. At the end of
 * the process, it tells how many increments and decrements have taken place.
 * If the user enters any negative number during the process, the program asks
 * for this number again, as many times as needed, until the number typed is
 * positive.
*/

#include <iostream>

using namespace std;

int main()
{
    int number1=0,number2,increment=0,decrement=0;

    cout << "Please, enter 10 numbers." << endl;

    for (int i=1 ; i<=10 ; i++)
    {
        number1=number2;

        do
        {
            cout << i <<".Enter a number: ";
            cin >> number2;
            if (number2<0)
                cout << "It must be greater than 0. Try again." << endl;
        }
        while (number2<0);

        if (i!=1)
        {
            if(number1>number2)
                decrement++;
            else if (number1<number2)
                increment++;
        }
    }

    cout << "There has been " << increment << " increments. ";
    cout << "And " << decrement << " decrements." << endl;

    return 0;
}
