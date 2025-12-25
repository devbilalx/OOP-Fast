#include <iostream>

using namespace std;

// struct Employee
// {
//     string name;
//     int rollno;

//     int cnic;

//     int salary;
// };

// struct Computer{

//     // some information

//     int state;

// };


class Employee{

    public:

    string name;

    void sign_in ();

    void promote();

};

void Employee:: sign_in(){

    cout<<"Signning in ...."<<endl;


}

void Employee:: promote(){

    cout<<"Promoting "<<endl;
}


int main()
{

    Employee     e1;   // instance of class employee (mtlb employee type ka bnda hai koi )

    e1.name="Bilal";

    cout<<"Prining name :" <<e1.name<<endl;

    e1.sign_in();

    e1.promote();


    Employee     *f;


    // f=&e1;

    f= new Employee;

    f->name="usman";


    cout<<"name is :"<<f->name<<endl;

    f->sign_in();



    

    return 0;
}
