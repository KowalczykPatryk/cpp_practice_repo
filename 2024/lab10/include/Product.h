#ifndef PRODUCT_H
#define PRODUCT_H

/**
 * @brief Klasa reprezentujaca produkt
 * 
 * Klasa zawiera informacje o typie produktu oraz ilosci produktu
 * 
 */
class Product
{
private:
    /** @brief typ produktu */
    int type;
    /** @brief ilość produktu */
    int number_of_pieces;
public:
    /**
     * @brief Konstruktor domyslny
     * 
     */
    Product();
    /**
     * @brief Konstruktor ustający typ produktu oraz ilość na tą samą wartość
     * 
     * @param type 
     */
    Product(int type);
    /**
     * @brief Konstruktor z parametrami typ produktu oraz ilość
     * 
     * @param type ustawaia typ produktu
     * @param number_of_pieces ustawia ilość produktu
     */
    Product(int type, int number_of_pieces);
    /** @brief Getter typu produktu */
    int getType();
    /** @brief Getter ilosci produktu */
    int getNumber();
    /** @brief Setter typu produktu */
    void setType(int type);
    /** @brief Setter ilości produktu */
    void setNumber(int numer);
    /** @brief Wypisywanie informacji o produkcie */
    void Print();
    /** @brief Setter ilości produktu */
    void SetCard(int number_of_pieces);
};

#endif