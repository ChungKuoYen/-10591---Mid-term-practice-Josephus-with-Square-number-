# -10591---Mid-term-practice-Josephus-with-Square-number-

https://acm.cs.nthu.edu.tw/problem/10591/

Description

[Josephs problem]

The Josephs problem is notoriously known. For those who are not familiar with the problem, among n people numbered 1, 2, . . . , n, standing in circle every mth is going to be executed and only the life of the last remaining person will be saved. Joseph was smart enough to choose the position of the last remaining person, thus saving his life to give the message about the incident.

The persons are eliminated in a very peculiar order; m is a dynamical variable, which each time takes a different value corresponding to the square numbers succession (1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, ...). So in order to kill the i-th person, Josephus counts up to the i-th square number.

For example, there are 5 people in a circle, and the sequence of couting is square number succession (1, 4, 9, 16, …).

In the beginning, the step to kill m = 1. The sequence of killing people is as follows.

1.............................(kill 1, and m is changed to 4)

2, 3, 4, 5 .....................(kill 5, and m is changed to 9)

2, 3, 4, 2, 3, 4, 2, 3, 4, 2, 3, 4.............(kill 4 , and m is changed to 16)

2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3.........(kill 3)

    Then print 2 as answer.

 

Let’s solve this problem using C++. You have been provided with the following class definitions:

 

class Node

{

   friend class Josephus;

   public:

          Node( const int &info ) //constructor

      :number( info ), next( NULL ), prev(NULL)

      {

      } //end ListNode constructor

   private:

          Node *next;

          Node *prev;

          int number;

};//end class Node

 

class Josephus

{

    public:

         Josephus();

         ~Josephus();

         Josephus(const int &);

         int kill(); // return the survival’s position

 

    private:

        void generatecircularlinkedList(const int &); // generate circular linked-list

        void generateSquare(const int &); // generate square sequence table

        int sequence[10005]; // store square number

        int noOfPeople;

        Node *head, *current;

};

 

REQUIREMENTS:

In this practice, you are asked to implement the following member functions:

 

Josephus class:

    constructor
    destructor
    int kill();
    void generatecircularlinkedList(const int &);
    void generateSquare(const int &);

Note:

1.This problem involves three files.

    function.h: Class definitions.
    function.cpp: Member-function definitions.
    main.cpp: A driver program to test your class implementation.

You will be provided with main.cpp and function.h, and asked to implement function.cpp.

 

<code>function.h</code>

#ifndef FUNCTION_H

#define FUNCTION_H

#include <iostream>

class Node

{

   friend class Josephus;

   public:

          Node( const int &info ) //constructor

      :number( info ), next( NULL ), prev(NULL)

      {

      } //end ListNode constructor

   private:

          Node *next;

          Node *prev;

          int number;

};//end class Node

 

class Josephus

{

    public:

         Josephus();

         ~Josephus();

         Josephus(const int &);

         int kill();

    private:

        void generatecircularlinkedList(const int &); 

        void generateSquare(const int &); 

        int sequence[10005];

        int noOfPeople;

        Node *head, *current;

};

#endif // FUNCTION_H

 

<code>main.cpp</code>

#include <iostream>

#include "function.h"

using namespace std;

int main(){

        int numofpeople;

        while(cin>>numofpeople){

                Josephus Jose(numofpeople);

                int survival = Jose.kill();

                cout<<survival<<endl;

       }

}

 

2.For OJ submission:

       Step 1. Submit only your function.cpp into the submission block.

       Step 2. Check the results and debug your program if necessary.

 
Input

Each line with 1 integers, n. n is the number of people. Input terminated by EOF.

 

Testcase 1 : 1<=n<10

Testcase 2 : 10<=n<100

Testcase 3 : 100<=n<1000

Testcase 4 : 1000<=n<5000

Testcase 5 : 5000<=n<10000

 
Output

The output will consist in separate lines containing the position of the person which life will be saved.
