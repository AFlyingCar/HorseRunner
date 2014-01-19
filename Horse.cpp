#include <string>

#include "Horse.h"

Horse::Horse(std::string name, int speed)
  : m_name(name),
    m_speed(speed) {

}

void Horse::setName(std::string name){
	m_name = name;
}

void Horse::setSpeed(int speed){
	m_speed = speed;
}

std::string Horse::getName(){
	return m_name;
}

int Horse::getSpeed(){
	return m_speed;
}
