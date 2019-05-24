// put the function definitions here:
double to_fahrenheit(int celsius) {

  double fahrenheit = (celsius * 9 / 5) + 32;
  return fahrenheit;

}

double to_celsius(int fahrenheit) {

  double celsius = (fahrenheit - 32) * 5 / 9;
  return celsius;

}