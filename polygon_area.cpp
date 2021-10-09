#include <iostream>
using namespace std;
class Polygon{
public:
    float area(float radius){
        return 3.1416*radius*radius;
    }
    float area(float base, float height){ //function overloading
        return 0.5*base*height;
    }
};

int main(){
    Polygon circle, triangle;
    float ca, ta;
    ca = circle.area(5);
    ta = triangle.area(3, 4);
    cout<<"Circle Area= "<<ca<<endl;
    cout<<"Triangle Area= "<<ta<<endl;
}
