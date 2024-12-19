/**
 * @file Shop.h
 * @brief This file contains the definition of the Shop class.
 *
 * The Shop class represents a shop that can store and manage products.
 */

#ifndef SHOP_H
#define SHOP_H

#include "Product.h"
#include <iostream>

/**
 * @class Shop
 * @brief Represents a shop that can store and manage products.
 *
 * The Shop class provides functionality to add, remove, and print products.
 */
class Shop
{
private:
    /**
     * @brief Pointer to an array of products.
     */
    Product** product;

    /**
     * @brief The number of products currently in the shop.
     */
    int size;

public:
    /**
     * @brief Default constructor for the Shop class.
     */
    Shop();

    /**
     * @brief Copy constructor for the Shop class.
     * @param shop The Shop object to copy.
     */
    Shop(const Shop &shop);

    /**
     * @brief Constructor for the Shop class that takes a single Product object.
     * @param product The Product object to add to the shop.
     */
    Shop(const Product &product);

    /**
     * @brief Constructor for the Shop class that takes two Product objects.
     * @param product1 The first Product object to add to the shop.
     * @param product2 The second Product object to add to the shop.
     */
    Shop(const Product &product1, const Product &product2);

    /**
     * @brief Constructor for the Shop class that takes an array of Product objects.
     * @param number_of_products The number of Product objects in the array.
     * @param product_array The array of Product objects.
     */
    Shop(int number_of_products, Product** product_array);

    /**
     * @brief Destructor for the Shop class.
     */
    ~Shop();

    /**
     * @brief Clears all products from the shop.
     */
    void Clear();

    /**
     * @brief Prints all products in the shop.
     */
    void Print();

    /**
     * @brief Removes all products from the shop.
     */
    void Remove();

    /**
     * @brief Adds a Product object to the shop.
     * @param product The Product object to add.
     */
    void Add(const Product &product);
};
#endif // SHOP_H