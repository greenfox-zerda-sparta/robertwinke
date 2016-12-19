/*
 * color.hpp
 *
 *  Created on: Dec 14, 2016
 *      Author: robertwinke
 */
#include <cstdint>
#include <string>

#ifndef COLOR_HPP_
#define COLOR_HPP_

using namespace std;

class Color {
private:
  unsigned char red_, green_, blue_;
public:
  Color();
  Color(unsigned char,unsigned char,unsigned char);
  Color(std::string);
  Color(const Color& original);
  Color blend(const Color& other) const;
  void darken(float amount) throw (const char*);
  void lighten(float amount) throw (const char*);
  void setColors(unsigned int,unsigned int,unsigned int);

  Color operator+(const Color& other) const;
  Color& operator++();    //prefix
  Color& operator--();    //prefix
  Color operator++(int);  //postfix
  Color operator--(int);  //postfix
  Color operator*(float amount);
  Color operator/(float amount);
  bool operator==(const Color& other) const;
  bool operator!=(const Color& other) const;
  bool operator<(const Color& other) const;
  bool operator>(const Color& other) const;
  bool operator<=(const Color& other) const;
  bool operator>=(const Color& other) const;

  friend ostream& operator<<(ostream& os, const Color& color);
  friend istream& operator>>(istream& is, Color& color);
};

ostream& operator<<(ostream& os, const Color& color);
istream& operator>>(istream& is, Color& color);

#endif /* COLOR_HPP_ */
