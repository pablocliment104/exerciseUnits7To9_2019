/*
 * Author: Pablo Miguel Climent Gonzálvez
 * 
 * This program asks the user for whatever text he wants to type. It repeats 
 * the task as long as the brought in text contains at least a letter 'a' or
 * 'A'. 
*/

using System;

class TextWithoutA
{
    static void Main()
    {
        string text;
        bool loop;

        do
        {
            loop=false;

            Console.Write("Enter any text you want: ");
            text = Console.ReadLine();

            foreach (char c in text)
            {
                if (c=='a' || c=='A')
                    loop=true;
            }
        }
        while(loop);
    }
}
