#include <string>

class Horse {
 private:
  std::string m_name;
  int m_speed;

 public:
  Horse(std::string name, int speed);

  void setName(std::string name);
  void setSpeed(int speed);

  std::string getName();
  int getSpeed();

};

