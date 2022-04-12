// Rectangle.h

class Rectangle {
   private:
      int length;
      int width;
   public:
      Rectangle(); // Default Constructor
      Rectangle(int l, int w); // Overloaded Constructor
      ~Rectangle(); // Destructor
       void setLength(int l);
       int getLength();
       void setWidth(int w);
       int getWidth();
       int calcArea();
       void display();
};
