/* Author: Andikalovskiy Nikita
    e-mail: st131335@student.spbu.ru
    Assignment5: 3 virtual methods, extended testing
 */

#include <iostream>
#include <vector>

#include "Autobot.h"
#include "Decepticon.h"

int main() {
  // Direct test
  Autobot a("Optimus Prime");
  Decepticon d("Megatron");
  Transformer t("Transformer");

  std::cout << "        Test 1. Direct: " << std::endl;
  std::cout << "\nTesting Autobot:\n" << std::endl;
  a.transform();
  a.openFire();
  a.ulta();

  std::cout << "\nTesting Decepticon:\n" << std::endl;
  d.transform();
  d.openFire();
  d.ulta();

  std::cout << "\nTesting Transformer:\n" << std::endl;
  t.transform();
  t.openFire();
  t.ulta();

  // Pointer test
  Transformer* t1 = &a;
  Transformer* t2 = &d;
  Transformer* t3 = &t;

  std::cout << "\n        Test 2. Pointers: " << std::endl;

  std::cout << "\nTesting Autobot:\n" << std::endl;
  t1->transform();
  t1->openFire();
  t1->ulta();

  std::cout << "\nTesting Decepticon:\n" << std::endl;
  t2->transform();
  t2->openFire();
  t2->ulta();

  std::cout << "\nTesting Transformer:\n" << std::endl;
  t3->transform();
  t3->openFire();
  t3->ulta();

  // Vector test
  std::vector<Transformer*> transformers;

  for (int i = 0; i < 3; ++i) {
    transformers.push_back(
        new Transformer("Transformer" + std::to_string(i + 1)));
    transformers.push_back(new Autobot("Autobot" + std::to_string(i + 1)));
    transformers.push_back(
        new Decepticon("Decepticon" + std::to_string(i + 1)));
  }

  std::cout << "\n        Test 3:\n\n";
  for (Transformer* t : transformers) {
    t->transform();
    t->openFire();
    t->ulta();
  }

  for (Transformer* t : transformers) {
    delete t;
  }
}