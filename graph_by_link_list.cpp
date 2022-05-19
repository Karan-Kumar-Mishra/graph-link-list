#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
     //graph data structure
class node
{
public:
    int info;
    node *next;
    void push_back(node *head,int data)
    {
        node *ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        node *p1=new node;
        p1->info=data;
        ptr->next=p1;
    }
    void display(node *head)
    {
        node *ptr=head->next;
        while(ptr!=NULL)
        {
            cout<<ptr->info<<" ";
            ptr=ptr->next;
        }
    }
    node* create(int data)
    {
        node *ptr=new node;
        ptr->info=data;
        ptr->next=NULL;
        return ptr;
    }
};
class graph
{
public:
    int n;
    node *arr[1];
    graph(int c)
    {
        n=c;
        arr[n];
        for(int i=0; i<n; i++)
        {
            arr[i]=new node;
        }
    }
    ~graph()
    {
      for(int i=0; i<n; i++)
        {
            delete arr[i];
        }
    }
    void add(int s,int d)
    {
        arr[s]->push_back(arr[s],d);
    }
    void display_graph()
    {
        for(int i=0; i<5; i++)
        {
            cout<<"vertex "<<i<<" -->";
            arr[i]->display(arr[i]);
            cout<<endl;
        }
    }
};
int main()
{
    graph g1(8);
    g1.add(1,2);
    g1.add(1,4);
    g1.add(1,3);
    g1.add(2,1);
    g1.add(2,4);
    g1.add(3,1);
    g1.add(3,4);
    g1.add(4,2);
    g1.add(4,1);
    g1.add(4,5);
    
    g1.display_graph();
    return 0;
}