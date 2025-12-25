#include <iostream>

using namespace std;


struct  student
{
    int rollno;
    string name;
};



int main()
{

    student s1;

    s1.name="Bilal";

    student *s;
    s=&s1;


    cout<<(*s).name<<endl;  //  (*s). == s->


    s=new student;  /// new will return address and make space for new address in ram but without decalation


    delete s;  // this will free meomry so os can allocate it to something else


    struct node
    {
        int val;

        node *next;
    };

    node *n;
    n= NULL;

    n=new node;

    n->val=1;

    n->next=NULL;

    n->next=new node;

    n->next->val=4;

    n->next->next=NULL;
    



    return 0;
}
