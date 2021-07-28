#include <iostream>
#include <vector>

using namespace std;

template<class A>
class Pair1 {
private:
    A a, b;
public:
    Pair1(A aa, A bb) : a(aa), b(bb)
    {
    }
    A first() const
    {
        return a;
    }
    A second() const
    {
        return b;
    }
};

template<class A, class B>
class Pair
{
private:
    A a;
    B b;
public:
    Pair(A aa, B bb) : a(aa), b(bb)
    {
    }
    A first() const
    {
        return a;
    }
    B second() const
    {
        return b;
    }
};

template<class A>
class StringValuePair : public Pair<string, A>
{
public:
    StringValuePair(string str, A a) : Pair<string, A>(str, a)
    {
    }
};

int main()
{
    // #1
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    cout << endl << endl;

    // #2
    Pair<int, double> p3(6, 7.8);
    cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';
    const Pair<double, int> p4(3.4, 5);
    cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';

    cout << endl << endl;

    // #3
    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

    cout << endl;
    return 0;
}
