#include<iostream>
#define null NULL
using namespace std;

class Node
{
    public:
           int n;
           Node *next,*head;
           Node(){}
};
class LinkedList
{
     public:
            Node*root,*head;
            void add(int v)
            {
                Node*temp=new Node();
                temp-> n=v;
                temp->next=root;
                root=temp;
            }
            void remove_first()    //removefirst
            {
                root=root->next;
            }
            void display()
            {
                Node *temp=root;
                cout<<"[";
                while(temp !=head)
                {
                    cout<<temp->n;
                    if(temp->next !=head)cout<<",";
                    temp=temp->next;
                }
                cout<<"]"<<endl;
            }
            void remove_last()          //removelast
            {
                if(root!=head)
                {
                    if(root->next==head)root=head;
                    else
                        {
                            Node *temp = root;
                            while (temp->next->next != head)
                            {
                                temp = temp -> next;
                            }
                            temp->next =head;
                        }
                    
                }
            }
            void add_last(int v)              //addlast
            {
                Node*t=new Node();
                t->n = v;
                t->next=head;
                if(root==head){root=t;return;}
                Node*temp=root;
                while(temp->next!=head)
                {
                    temp=temp->next;
                }
                temp->next=t;
            }
            void add_first(int v)           //addfirst
            {
                Node*temp=new Node();
                temp->n = v;
                temp->next=root;
                root=temp;
            }
            
};
int main()
{
    LinkedList*ll=new LinkedList();
    ll->add(20); ll->add(30); ll->add(40); ll->add(50); ll->display();
    ll->remove_first();
    ll->display();
    ll->remove_last();
    ll->display();
    ll->add_last(20);
    ll->display();
    ll->add_first(50);
    ll->display();

    return 0;
}
