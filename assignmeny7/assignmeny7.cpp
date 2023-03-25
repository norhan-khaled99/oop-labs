#include <iostream>
using namespace std;
int Power(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    else
        return (base * Power(base, exponent - 1));
}
class Fraction
{
private:
    int num, den;
public:
    Fraction(int n, int d) : num(n), den(d) { }

    friend istream& operator>>(istream& in, Fraction& f)
    {
        cout << "Enter numerator and denominator: ";
        in >> f.num >> f.den;

        return in;
    }

    friend ostream& operator<<(ostream& out, const Fraction& f)
    {
        out << f.num << "/" << f.den;
        return out;
    }
};

int main() {
    cout << "the power = " << Power(2, 3) << "\n";
    Fraction f1(10, 20);

    cout << "Fraction 1 is: " << f1 << endl;

    cout << "Enter fraction 2: ";

    Fraction f2(0, 1);

    cin >> f2;

    cout << "Fraction 2 is: " << f2 << endl;
    return 0;

}
