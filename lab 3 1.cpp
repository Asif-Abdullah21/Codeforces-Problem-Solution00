#include <iostream>

using namespace std;
class Triangle
{
    double H, B;

public:
    Triangle()
    {
        H = 0;
        B = 0;
    }
    Triangle(double a, int b)
    {
        H = a;
        B = b;
    }
    Triangle(double a, double b)
    {
        H = a;
        B = b;
    }
    Triangle(int &a, double &b)
    {
        H = a;
        B = b;
    }
    Triangle(int a, int b)
    {
        H = a;
        B = b;
    }
    Triangle(Triangle &a, Triangle &b)
    {
        H = a.H;
        B = b.B;
    }
    Triangle area(Triangle p)
    {
        Triangle t;
        t.H = .5 * p.H * p.B;
        return t;
    }
    void display()
    {
        cout << H << endl;
    }
    ~Triangle()
    {
    }
};

int main()
{
    int l;
    double r;
    cin >> l >> r;
    Triangle t11(l, r);
    Triangle t10(11.3, 8);

    Triangle t2(11.3, 8.7);
    Triangle t1(11.3, 8.7);
    Triangle t3(t1, t2);
    Triangle t4;
    t4 = t4.area(t3);
    t4.display();

    return 0;
}
