#include<iostream>
using namespace std;

class student{
private:
    int id1;
    int id2;
public:
    student()
    {
        id1=186;
        id2=200;
    }
    student(student &x)
    {
        id1=x.id1;
        id2=x.id1;
    }
    display()
    {
        cout << id1 << endl;
        cout << id2 << endl;
    }

};

int main()
{
    student s1;
    student s2(s1);
    s1.display();
    s2.display();

    return 0;
}

/*
#include<iostream>
using namespace std;

class student{
    int id;
public:
    student()
    {
        id=1;
    }
    student(int x)
    {
        id=x;
    }

    void display()
    {
        cout << id << endl;
    }
};

int main()
{
    student s1;
    student s2(10);
    student s3(15);
    s1.display();
    s2.display();

    s3.display();

    return 0;
}

*/
