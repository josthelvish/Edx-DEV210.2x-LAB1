
#ifndef EDX_DEV210_2X_LAB1_PERSON_H

#include <iostream>

#define EDX_DEV210_2X_LAB1_PERSON_H

using namespace std;
//Create a simple class in your C++ application called Person.

/**
 * Person class.
 */
class Person {

    //Give Person member variables for name, age, height, and weight.
    //Feel free to make these private with public accessors or make them public without accessors.
    // It is not important for this exercise.
private:
    /**
     * Person's name.
     */
    string _name;
    /**
     * Person's age.
     */
    int _age;
    /**
     * Person's height and weigth.
     */
    float _height, _weight;

public:
    /**
     * Person's default constructor.
     */
    Person();
    /**
    * Person's complete constructor.
    * @param name string with person's name.
    * @param age int with person's age.
    * @param height with person's height.
    * @param wheight with person's weight.
    */
    Person(string name,int age,float height,float wheight);
    /**
     * Generic destructor.
     */
    ~Person();
    /**
     * Outputs an object Person as a String.
     */
    void toString();
    /**
     * Getters and Setters to Person's attributes.
     */
    const string &get_name() const;

    void set_name(const string &_name);

    int get_age() const;

    void set_age(int _age);

    float get_height() const;

    void set_height(float _height);

    float get_weight() const;

    void set_weight(float _weight);
};


#endif //EDX_DEV210_2X_LAB1_PERSON_H
