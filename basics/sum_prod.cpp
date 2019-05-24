#include <iostream>
#include <vector>

int main(){
  

std::vector<int> numbers = {2,4,3,6,1,9};

int sum_even = 0;
int prod_odd = 1;

for(int i=0; i<= numbers.size(); i++){
  if (numbers[i]%2 ==0){
    sum_even += numbers[i];
  }
  if(numbers[i]%2 !=0 ){
    prod_odd = prod_odd * numbers[i];
  }

}
std::cout << "Sum of even numbers is " << sum_even << "\nProduct of odd numbers is " << prod_odd;
}
