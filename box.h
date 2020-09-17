ssssss

#include<string>
class Box {
  int m_length;
  int m_height;
  int m_breadth;

public:
  Box();
  Box(int, int, int);
  Box(int);
  Box(const Box &);

  void credit(double);
  void debit(double);
  int getCustomerId();
  std::string getCustomerName();
  double getBalance() const;
  void display();
};

