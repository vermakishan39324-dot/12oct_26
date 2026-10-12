  #include<iostream>
  using namespace std;
  class shape{
    public:
    virtual void calculateArera()=0;
  };
  class ractangle : public shape{
    public:
    void calculateArea() override{
        int length = 20, breath= 10;
        cout<<"{Area of ractanglr is}"
        "<< length * breath << endl;
    }
  };
  int main(){
  ractangle r;
  r.calculateArea();
  return 0;

  }