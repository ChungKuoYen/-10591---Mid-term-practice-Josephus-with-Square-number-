#include <iostream>
#include"function.h"

using namespace std;



       Josephus::Josephus(const int &a)
       {
           generatecircularlinkedList(a);
       }

         int Josephus::kill() const
         {
             Node *curr, *tmp;
             int remain=noOfPeople,i=1,j;
             curr = head;
             while(remain>1)
             {
                 j=i*i;
                 i++;
                 if(j==1)
                 {
                   tmp = curr->prev;
                   tmp->next=curr->next;
                   delete curr;
                   curr=tmp->next;
                 }
                 else{
                        if(j>=remain)
                        {
                            if(j%remain==0)
                                j=remain;
                            else
                                j=j%remain;
                        }

                 while(j>1)
                 {
                     tmp = curr;
                     curr=curr->next;
                     j--;
                 }
                 tmp->next=curr->next;
                 delete curr;
                 curr=tmp->next;

                 }
                 remain--;

             }
     return curr->number;
         }



        void Josephus::generatecircularlinkedList(const int &a)
        {

           head = new Node(1);
           int i = 1;
           Node *curr, *tmp;
           noOfPeople = a;
           curr = head;
           while(i<a)
           {
               i++;
               tmp=curr;
               curr = new Node(i);
               tmp->next = curr;
               curr->prev = tmp;

           }
           tmp = curr;
           curr = head;
           tmp->next=curr;
           curr->prev = tmp;
        }

     //   void generateSquare(const int &);

         Josephus::Josephus()
         {

         }

         Josephus::~Josephus()
         {

         }

