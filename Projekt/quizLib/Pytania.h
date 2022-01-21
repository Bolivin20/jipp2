//
// Created by user on 19.01.2022.
//
#ifndef NEW_PYTANIA_H
#define NEW_PYTANIA_H
class Pytania{
public:
    /**
     * metod czyta konkretne pytanie
     * @param randomowa numer wylosowanego pytania
     */
    void czytajPytanie(int randomowa);

    /**
     * metoda z cout (polimorfizm)
     */
    virtual void wprowadz();
};
#endif //NEW_PYTANIA_H
