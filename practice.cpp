/// Shihab er basic ///
/*
#include<iostream>
using namespace std;
class student
{
    int id;
public:
    student()
    {

    }
    student(int x)
    {
		id = x;
    }
    void display()
    {
        cout << id << endl;
    }
};
int main ()
{
    student s1;
    student s2(10);
    student s3(15);
    s2.display();
   // s3.display();

}
*/

/// Copy constructor from Nasim ///

#include<bits/stdc++.h>
using namespace std;
class copyy{

 int val;
 int val2;
 public:
 	copyy(){
 	 val =34;
 	 val2 = 10;
 	}
 	copyy(copyy &c1){
		val2 = c1.val;
		val = c1.val;
 	}

 	display(){
 	cout<<val<<endl;
 	cout<<val2<<endl;
 	}


};
int main()
{
	copyy c1;
	copyy c2(c1);
	c2.display();
	c1.display();

	return 0;
}

