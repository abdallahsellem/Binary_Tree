#include<iostream>
#include<queue>
#include "../include/Tree_structrue.h"
 bool IsEmpty(node*pare)
{
     if (!pare)
     {
         return 1;

     }
     else
         return 0;
}
 void Insert_Element(node* &pare,int value)
 {
     if (!pare)
     {
          pare= new node;
         pare->data = value;
         pare->left = nullptr;
         pare->right = nullptr;
     }
     else
     {
         if (pare->data > value)
         {
             Insert_Element(pare->left, value);
         }
         else
         {
             Insert_Element(pare->right, value);
         }
     }
 }
 void BFS(node* pare)
 {
     if (!pare)
     {
         std::cout << "Empty Tree" <<std:: endl;

     }
     else {


         std::queue < node * > q;
         q.push(pare);
         while (!q.empty()) {
             node *pt = q.front();
             std::cout << pt->data << std::endl;
             if (pt->left) {
                 q.push(pt->left);
             }
             if (pt->right) {
                 q.push(pt->right);
             }
             q.pop();

         }
         std::cout<<'\n' ;
     }

 }
 void PreOrder(node* pare)
 {
     if (IsEmpty(pare))
     {
         std::cout << "Empty Tree" << std::endl;
         return;
     }
     std::cout << pare->data << std::endl;
     PreOrder(pare->left);
     PreOrder(pare->right);
 }
 void InOrder(node* pare)
 {
     if (IsEmpty(pare))
     {
         std::cout << "Empty Tree" << std::endl;
         return;
     }
     InOrder(pare->left);
     std::cout << pare->data << std::endl;
     InOrder(pare -> right);
 }
 void PostOrder(node* pare)
 {
     if (IsEmpty(pare))
     {
         std::cout << "Empty Tree" << std::endl;
         return;
     }
     PostOrder(pare->left);
     PostOrder(pare -> right);
     std::cout << pare->data << std::endl;
 }
