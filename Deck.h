/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   Deck.h
 * Author: etudiant
 *
 * Created on May 30, 2024, 7:54 p.m.
 */

#ifndef DECK_H
#define DECK_H

#endif /* DECK_H */

#include <vector>
#include "Card.h"
#include <memory>
#include <algorithm>
#include <random>

class Deck 
{
public:
  Deck();
  Deck(const Deck & aDeck);
  int getSize();
  //pops the card at the end of the vector cards
  Card getCard();
  void shuffleDeck();
  void resetDeck();
  void clearDeck();
  void addCard(Card aCard);
protected:
   std::vector <std::unique_ptr<Card>> cards;
private:
 
  
};