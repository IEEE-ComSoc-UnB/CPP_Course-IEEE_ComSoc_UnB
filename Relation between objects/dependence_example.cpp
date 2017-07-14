#include <iostream>
 
class Point
{
private:
    double m_x, m_y, m_z;
 
public:
	//Constructor
    Point(double x=0.0, double y=0.0, double z=0.0): m_x(x), m_y(y), m_z(z)	//inicializando as variáveis e atribuindo-as aos atributos da classe
    {
    }
 
    friend std::ostream& operator<< (std::ostream &out, const Point &point); //friend para acessar os atributos privados de Point
};
 
std::ostream& operator<< (std::ostream &out, const Point &point)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";
 
    return out;
}
 
int main()
{
    Point point1(2.0, 3.0, 4.0);
 
    std::cout << point1;
 
    return 0;
}
