
//#ifndef Time_H_INCLUDED
#define Time_H_INCLUDED
class Time {
    int m_hours;
    int m_minutes;
    int m_seconds;
  public:
    // Constructers

    Time();
    Time(int,int,int);
    Time(int,int );

    // members
    Time operator+(const Time &ref);

    Time operator-(const Time &ref);
    Time operator*(const Time &ref);
    Time& operator++();
    Time operator++(int dummy);
    bool operator< (const Time &ref);
    bool operator> (const Time &ref);
    Time& operator+=(const Time &ref) ;


    bool operator==(const Time &ref);
    void Simplify();
    void isSimplify();
    int getSecond();
    void display();



};




