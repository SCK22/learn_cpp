#include <iostream>

int main() {
  float earth_weight;
  int planet_number;
  std::cout << "Enter you earth weight: ";
  std::cin >> earth_weight;
  
  std::cout << "Select  a number corresponding to the plane you are on: \n";
  std::cout << """1	Venus 2	Mars 3	Jupiter 4	Saturn 5	Uranus 6	Neptune\n""";
  
  float planet_x_weight;
  std::cin >> planet_number;
  switch (planet_number){
    case 1 :
      planet_x_weight = 0.78 * earth_weight;
      break;
    case 2 :
      planet_x_weight = 0.39 * earth_weight;
      break;
    case 3 :
      planet_x_weight = 2.65 * earth_weight;
      break;
    case 4 :
      planet_x_weight = 1.17 * earth_weight;
      break;
    case 5 :
      planet_x_weight = 1.05 * earth_weight;
      break;
    case 6 :
      planet_x_weight = 1.23 * earth_weight;
      break;
    default :
      planet_x_weight = 0.0;
  }
	std::cout << "Weight on planet " << planet_number << " is " << planet_x_weight << "\n";   

}