/*
 * Color.cpp
 *
 *  Created on: Dec 14, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include "Color.hpp"
#include "Util.hpp"

Color::Color():red_(0), green_(0), blue_(0) {

}
Color::Color(unsigned char red, unsigned char green, unsigned char blue)
:red_(red)
,green_(green)
,blue_(blue)
{

}
Color::Color(std::string hexNum) {
  red_= hexToInt(hexNum.substr(1,2));
  green_ = hexToInt(hexNum.substr(3,2));
  blue_ = hexToInt(hexNum.substr(5,2));

}
Color::Color(const Color& original) {
  this->red_ = original.red_;
  this->green_ = original.green_;
  this->blue_ = original.blue_;
}
Color Color::blend(const Color& other) const {
  Color newColor;
  newColor.red_ = (this->red_ + other.red_) / 2;
  newColor.green_ = (this->green_ + other.green_) / 2;
  newColor.blue_ = (this->blue_ + other.blue_) / 2;

  return newColor;
}
void Color::darken(float amount) throw (const char*) {
  if (amount > 1) {
    throw "invalid amount";
  }
  else {
    red_ -= red_ * amount;
    green_ -= green_ * amount;
    blue_ -= blue_ * amount;
  }
}
void Color::lighten(float amount) throw (const char*) {
  if (amount > 1) {
    throw "invalid amount";
  }
  else {
    this->setColors(red_ * (1 + amount), green_ * (1 + amount), blue_ * (1 + amount));
  }
}
void Color::setColors(unsigned int red, unsigned int green, unsigned int blue) {
  unsigned int maxValue = 255;
  if (red > maxValue) {
    red_ = maxValue;
  }
  else {
    red_ = red;
  }
  if (green > maxValue) {
    green_ = maxValue;
  }
  else {
    green_ = green;
  }
  if (blue > maxValue) {
    blue_ = maxValue;
  }
  else {
    blue_ = blue;
  }
}
Color Color::operator+(const Color& other) const {
  return this->blend(other);
}
Color& Color::operator++() {    //prefix
  this->lighten(0.1);
  return *this;
}
Color& Color::operator--() {    //prefix
  this->darken(0.1);
  return *this;
}
Color Color::operator++(int){  //postfix
  Color temp(*this);
  ++(*this);
  return temp;
}
Color Color::operator--(int){  //postfix
  Color temp(*this);
  --(*this);
  return temp;
}
Color Color::operator*(float amount) {
  Color temp(*this);
  temp.lighten(amount);
  return temp;
}
Color Color::operator/(float amount) {
  Color temp(*this);
  temp.darken(amount);
  return temp;
}
bool Color::operator==(const Color& other) const {
  return (red_ == other.red_ && green_ == other.green_ && blue_ == other.blue_);
}
bool Color::operator!=(const Color& other) const {
  return (!(*this == other));
}
bool Color::operator<(const Color& other) const {
  return (red_ + green_ + blue_ < other.red_ + other.green_ + other.blue_);
}
bool Color::operator>(const Color& other) const {
  return (red_ + green_ + blue_ > other.red_ + other.green_ + other.blue_);
}
bool Color::operator<=(const Color& other) const {
  return (red_ + green_ + blue_ <= other.red_ + other.green_ + other.blue_);
}
bool Color::operator>=(const Color& other) const {
  return (red_ + green_ + blue_ >= other.red_ + other.green_ + other.blue_);
}


ostream& operator<<(ostream& os, const Color& color) {
  os <<  (int)color.red_ << "|" <<(int)color.green_<< "|" << (int)color.blue_ << endl;

  return os;
}
istream& operator>>(istream& is, Color& color) {
  string colorCode;
  cout << "enter hex color code: " << endl;

  is >> colorCode;
  Color temp(colorCode);

  color = temp;
  return is;
}
