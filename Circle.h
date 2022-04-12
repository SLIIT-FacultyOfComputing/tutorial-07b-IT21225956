
// Circle.h

class Circle {
   private:
      int radius;
   public:
      Circle(); // Default Constructor
      Circle(int r); // Overloaded Constructor
      ~Circle(); // Destructor
      void setRadius(int r);
      int getRadius();
      void display();
      float calcArea();
};
