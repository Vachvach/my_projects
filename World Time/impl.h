#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <sstream>

enum clock
{
  hours = 24,
  minutes = 1440,
  my_utc = 4
};

float my_time();
float checking_utc();
void world_clock();

float my_time()
{

  time_t rawtime; 

  struct tm *timeinfo; 

  char buffer[10]; 

  time(&rawtime); 

  timeinfo = localtime(&rawtime);

  strftime(buffer, 10, "%H%M", timeinfo); 
  float t = atoi(buffer);
  return t;
}

float checking_utc()
{
  std::cout << "Enter please country ";
  std::string country;
  std::string word;
  std::string UTC;
  std::string line;
  std::getline(std::cin, country);
  std::ifstream F;

  F.open("text.txt");
  while (!F.eof())
  {
    std::getline(F, line);
    std::stringstream s(line);
    s >> word;
    if (word == country)
    {
      s >> UTC;
      break;
    }
  }
  std::cout << "The time zone of " <<  country << " is "<< UTC << std::endl;
  float res;
  res = stof(UTC);
  F.close();
  return res;
}

void world_clock()
{
  int my_min = my_time();
  if((my_min/10)%10 == 0)
  {
    
  }
  float hour = (my_min / 100) * 60 + my_min % 100;
  my_min = hour;
  
  float country_utc = checking_utc();
  if (my_utc < country_utc)
  {
    float distance = (country_utc - my_utc) * 60;
    my_min += distance;
  }
  else if (my_utc > country_utc)
  {
    float distance = (my_utc - country_utc) * 60;
    my_min -= distance;
  }
  else if (my_min == minutes || my_min == 0)
  {
    std::cout << 00 << ":" << 00;
    return;
  }
  if (my_min > minutes)
  {
    my_min -= 1440;
  }
  if (my_min < 0)
  {
    my_min += 1440;
  }
  std::string s = std::to_string(my_min%60);
  
  std::cout << "The current time in capital city is " << my_min / 60 << ":" << my_min %60; 
}