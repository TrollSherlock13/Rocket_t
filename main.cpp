// A test Rocket is fired vertically upward from a well. A catapult gives it an initial speed of 80.6 m/s at ground level. Its engines then fire and it accelerates upward at 4.20 m/s^2 until it reaches an altitufde of 1130 m. At that point its engines fail, and the rocket goes into free fall, with an acceleration of -9.8 m/s^2.
#include <iostream>
#include <cmath>
using namespace std;
double time_1(double a, double b, double c);
int f_v(double a, double b, double c);
int main()
{
    double time, time2, time3, totaltime;
    double g = 9.8;
    double v_i, a_i, altitude, time_2, altitude_2, v_2;
    cout << "Enter initial acceleration, velocity, altitude: ";
    cin >> a_i >> v_i >> altitude;
    time = time_1(a_i,v_i,altitude);
    v_2 = v_i + a_i*time;
    time2 = v_2/g;
    altitude_2 = (0.5 * time2 * v_2) + altitude;
    time3 = sqrt(2*altitude_2/g);
    totaltime = time + time2 + time3;
    cout << "The total time of the rocket before hit ground is: " << totaltime << endl;
    // test
    double v0, a, t;
    double new_1;
    cout << "Enter the initial velocity, accelaration, time respectively: ";
    cin >> v0 >> a >> t;
    new_1 = f_v(v0, a, t);
    cout << "The final velocity is: " << new_1 << " m/s" <<endl;
}
              
double time_1(double a, double b, double c)
{
    double time;
    time = (-b + (sqrt(pow(b,2)+4*0.5*a*c)))/(2*0.5*a);
    return time;
}
//double time_2(double a1, double b1, double c1)
//{
 //   double velocity, time;
 ///   double g = 9.8;
 //   velocity = a1 + b1*c1;
 //   time = velocity/g;
//    return velocity;
//    return time;
//}
double f_v(double a, double b, double c)
{
    double new_1;
    new_1 = a + b*c;
    return new_1;
}
