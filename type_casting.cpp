#include <iostream>
#include <any>

int main() {
  int x = 42;
  float y = 3.14f;
  std::string z = "hello, world!";
  std::any any_value;

  any_value = 42;
  std::cout << "int value: " << std::any_cast<int>(any_value) << std::endl;

  any_value = 3.14;
  std::cout << "double value: " << std::any_cast<double>(any_value) << std::endl;

  any_value = std::string("hello, world!");
  std::cout << "string value: " << std::any_cast<std::string>(any_value) << std::endl;

  void* void_ptr;

  void_ptr = &x;
  std::cout << "int value: " << *(static_cast<int*>(void_ptr)) << std::endl;

  void_ptr = &y;
  std::cout << "float value: " << *(static_cast<float*>(void_ptr)) << std::endl;

  void_ptr = &z;
  std::cout << "string value: " << *(static_cast<std::string*>(void_ptr)) << std::endl;




  return 0;
}
