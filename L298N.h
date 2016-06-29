//Class for to drive the L298N h bridge chip


class L298N{
private:

int enA;      //define method variables
int enB;
int in1;
int in2;
int in3;
int in4;

public:

L298N();    //default constructor
L298N(int ENA, int IN1, int IN2, int IN3, int IN4, int ENB);    //select specific pins
void set_pins(int ENA, int IN1, int IN2, int IN3, int IN4, int ENB);    //set pins after initialisation
void drive(int Value);    
void turn_left(int Value);    
void turn_right(int Value);
void arc(int Value1, int Value2);


  
};

