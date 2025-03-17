#pragma once
#include <string>
#include <iostream>
#include <functional>

/**
 * 
 * @class Complex
 * @brief Klasa reprezentuje liczbę zespoloną.
 * 
 * Klasa Complex przechowuje liczbę zespoloną w postaci a + ib i obsługuje podstawowe operacje arytmetyczne.
 * 
 */
class Complex{
private:
    /**
     * @brief Część rzeczywista liczby zespolonej.
     * 
     */
    int _real;

    /**
     * @brief Część urojona liczby zespolonej.
     * 
     */
    int _complex;
public:
    /**
    * @brief Konstruktor domyślny inicjalizuje liczbę na 0 + 0i.
    */
    Complex();

    /**
     * @brief Konstruktor inicjalizujący liczbę zespoloną wartościami podanymi jako argumenty.
     * 
     * @param real reprezentuje część rzeczywistą liczby zespolonej.
     * @param complex reprezentuje część urojoną liczby zespolonej.
     */
    Complex(int real, int complex);

    /**
     * @brief Zwraca część rzeczywistą liczby zespolonej.
     * 
     * @return Część rzeczywista.
     */
    int getReal() const;

    /**
     * @brief Zwraca część urojoną liczby zespolonej.
     * 
     * @return Część urojona.
     */
    int getComplex() const;

    /**
     * @brief Przeładowany operator double() która zwraca moduł liczby zespolonej (sqrt(a² + b²)).
     * 
     * @return Zwraca moduł liczby zespolonej.
     */
    operator double();

    /**
     * @brief Przeładowany operator std::string() który zwraca tekstową rezprezentację liczby.
     * 
     * @return int "a + bi" lub "a - bi"
     */
    explicit operator std::string();

    /**
     * @brief Operator dodawania dwóch liczb zespolonych
     * 
     * @param complex Druga liczba zespolona.
     * @return Complex& Wynik dodawania.
     */
    Complex& operator+(const Complex& complex);

    /**
     * @brief OPerator mnożenia dwóch liczb zespolonych.
     * 
     * @param complex Druga liczba zespolona.
     * @return Complex& Wynik mnożenia.
     */
    Complex& operator*(const Complex& complex);

    /**
     * @brief Operator odejmowania dwóch liczb zespolonych.
     * 
     * @param complex Druga liczba zespolona.
     * @return Complex& Wynik odejmowania.
     */
    Complex& operator-(const Complex& complex);

    /**
     * @brief Operator dzielenia dwóch liczb zespolonych.
     * 
     * @param complex Druga liczba zespolona.
     * @return Complex& Wynik dzielenia.
     */
    Complex& operator/(const Complex& complex);

    /**
     * @brief Operator funkcyjny pobierający funkcję i stosuje ją na aktualnym obiekcie.
     * 
     * @param fun Funkcja która zadziała na obiekt.
     * @return double Rezultat wywołania funkcji na aktualnym obiekcie.
     */
    double operator()(std::function<double(const Complex& complex)> fun);

    /**
     * @brief Zaprzyjażniony operator wyjściaumożliwiający wypisanie liczby w formacie "a + bi" (lub "a - bi").
     * 
     * @param os Obiekt standardowego wyjścia.
     * @param complex Obiekt który zostanie wywołany na standardowe wyjście.
     * @return std::ostream& Zwraca zapełniony obiekt wyjścia.
     */
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex);

};