#include <iostream>
using namespace std;
class shopping
{
    double taka;

public:
    shopping()
    {
        taka = 0;
    }
    shopping(int a)
    {
        taka = a;
    }
    double sum2(int a, int b, int c, int d, int e, int f)
    {
        return a + b + c + d + e + f;
    }
    shopping returnn(shopping p)
    {
        shopping s, s1;
        s.taka = p.taka;
        s1.taka = p.taka;
        if (s.taka >= 50 && s.taka <= 1000)
        {
            if (s.taka >= 500)
            {
                s.taka = s.taka * .2;
                s1.taka -= s.taka;
                s1.taka = 1000 - s1.taka;
                return s1;
            }
            else
            {
                s.taka = s.taka * .02;
                s1.taka -= s.taka;
                s1.taka = 1000 - s1.taka;
                return s1;
            }
        }
    }
    void display()
    {
        cout << "You will get: "<< taka << endl;
    }
};

int main()
{
    double a, b, c, d, f, g, sum;
    cout << "Enter the price:\n";
    cin >> a >> b >> c >> d >> f >> g;

    shopping s4;
    sum = s4.sum2(a, b, c, d, f, g);
    shopping s2(sum), s3;

    s3 = s3.returnn(s2);
    s3.display();

    return 0;
}
