#include "ReadPersonAge.h"
#include "ReadPersonName.h"
#include "ReadPersonHeight.h"
#include "ReadPersonWeight.h"
#include "ReadPersonSalary.h"
#include "ReadPersonData.h"
#include "WritePersonData.h"
#include <iostream>

using namespace std;

extern unsigned short age;
extern string name;
extern unsigned short height, weight;
extern double salary;

int main() {
    /*unsigned short age;*/
   /* age = ReadPersonAge();
    name = ReadPersonName();
    height = ReadPersonHeight(height);
    weight = ReadPersonWeight(weight);
    salary = ReadPersonSalary();*/

    ReadPersonData(name, age, height, weight, salary);

    WritePersonData(name, age, height, weight, salary);

    return 0;
}
