/**
 * @file 1049.cpp
 *
 * @brief URI 1049 solution
 *
 * Input
 * The input contains 3 words, one by line, that will be used to identify the animal,
 *  according to the above table, with all letters in lowercase.
 *
 * Output
 * Print the animal name according to the given input.
 *
 * @note Problem page: https://www.urionlinejudge.com.br/judge/en/problems/view/1049
 *
 * @author Caio Marcelo Campoy Guedes <caiomcg@gmail.com>
 */

#include <iostream>
#include <utility>

int main(void) {
    std::string first;
    std::string second;
    std::string third;

    std::pair<std::pair<std::string, std::string>, std::pair<std::string, std::string> > ave;
    std::pair<std::pair<std::string, std::string>, std::pair<std::string, std::string> > mamifero;
    std::pair<std::pair<std::string, std::string>, std::pair<std::string, std::string> > inseto;
    std::pair<std::pair<std::string, std::string>, std::pair<std::string, std::string> > anelideo;

    ave = std::make_pair(std::make_pair("carnivoro", "aguia"), std::make_pair("onivoro", "pomba"));
    mamifero = std::make_pair(std::make_pair("onivoro", "homem"), std::make_pair("herbivoro", "vaca"));
    inseto = std::make_pair(std::make_pair("hematofago", "pulga"), std::make_pair("herbivoro", "lagarta"));
    anelideo = std::make_pair(std::make_pair("hematofago", "sanguessuga"), std::make_pair("onivoro", "minhoca"));

    while (std::cin >> first >> second >> third) {
        if (second == "ave") {
            std::cout << (ave.first.first == third ? ave.first.second : ave.second.second) << std::endl;
        } else if (second == "mamifero") {
            std::cout << (mamifero.first.first == third ? mamifero.first.second : mamifero.second.second) << std::endl;
        } else if (second == "inseto") {
            std::cout << (inseto.first.first == third ? inseto.first.second : inseto.second.second) << std::endl;
        } else {
            std::cout << (anelideo.first.first == third ? anelideo.first.second : anelideo.second.second) << std::endl;
        }
    }

    return 0;
}
