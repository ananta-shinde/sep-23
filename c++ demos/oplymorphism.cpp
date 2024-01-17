#include<stdio.h>
class Shape{
     public:
      void area()
      {
        printf("Area of shape\n");
      }
};

class Square :public Shape{
    public:
    //method overriding
    void area()
      {
        printf("Area of square\n");
      } 

      // overloaded method
    void area(int w)
      {
        printf("Area of square : %d,\n", w*w);
      } 
};
class Circle :public Shape{
     
};
int main(int argc, char const *argv[])
{
    Square s;
    // s.area();
    // s.area(20);
    // Circle c;
    // c.area();

    // Square* sq = new Circle();
    Shape * shape = new Square();
    Square * square2 = new Square();
    // Square * square1 = new Shape();

    shape->area();
    square2->area(20);
    return 0;
}
