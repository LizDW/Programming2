/*
 Elizabeth Dresser Wissler
 Programming II
 Due: February 26, 2018
 Infix to Postfix then Evaluate
 This program (#5) will:
   Read in an input file one line at a time
   Output the infix expression
   Convert the infix expression into a postfix expression using Dijkstra's$
   Output the postfix expression
   Evaluate the postfix expression
   Output the result
*/

#include "infixtopostfix.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
        string aline;
        ifstream inData;

        inData.open("infix.data");
                infixToPostfix convert1;

        while(getline(inData,aline))
        {
                convert1.convert(aline);
        }

        inData.close();

}

