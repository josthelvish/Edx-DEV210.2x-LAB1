#include "Person.h"

/**
 * Person's default constructor.
 */
Person::Person(){
    this->_age = 0;
    this->_height = 0.0;
    this->_name = "John Doe";
    this->_weight = 0.0;
}

/**
 * Person's complete constructor.
 * @param name string with person's name.
 * @param age int with person's age.
 * @param height with person's height.
 * @param wheight with person's weight.
 */
Person::Person(string name,int age,float height,float wheight){
    this->_age = age;
    this->_height = height;
    this->_name = name;
    this->_weight = wheight;
}

/**
 * Generic destructor.
 */
Person::~Person(){
}

/**
 * Gets the person's name.
 * @return the person's name.
 */
const string &Person::get_name() const {
    return _name;
}

/**
 * Defines new name to person.
 * @param _name new name.
 */
void Person::set_name(const string &_name) {
    Person::_name = _name;
}

/**
 * Gets the person's age.
 * @return the person's age.
 */
int Person::get_age() const {
    return _age;
}
/**
 * Defines new age to person.
 * @param _age new age.
 */
void Person::set_age(int _age) {
    Person::_age = _age;
}

/**
 * Gets the height from person.
 * @return the person's height.
 */
float Person::get_height() const {
    return _height;
}

/**
 * Defines new height to person.
 * @param _height new height.
 */
void Person::set_height(float _height) {
    Person::_height = _height;
}

/**
 * Gets the weight from person.
 * @return the person's weight.
 */
float Person::get_weight() const {
    return _weight;
}

/**
 * Defines new weight to person.
 * @param _weight new weight.
 */
void Person::set_weight(float _weight) {
    Person::_weight = _weight;
}

/**
 * Outputs an object Person as a String.
 */
void Person::toString(){
    cout << "NAME : " << this->_name << endl;
    cout << "AGE : " << this->_age << endl;
    cout << "HEIGHT : " << this->_height << endl;
    cout << "WEIGHT : " << this->_weight << endl;
}

