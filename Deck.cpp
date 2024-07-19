/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   Deck.cpp
 * Author: etudiant
 * 
 * Created on May 30, 2024, 7:54 p.m.
 */

#include "Deck.h"
using namespace std;
/*
 *\brief creates a full deck of 52 cards
 */
Deck::Deck()
{
for ( int symbol = 1; symbol < 5; symbol++)
  {
    for (int value = 1; value < 14; value++)
      {
        cards.push_back ( unique_ptr <Card>(new Card(symbol, value)));
      }
  }
}
Deck::Deck(const Deck & aDeck)
{
  for (const auto & card : aDeck.cards)
    {
      cards.push_back( unique_ptr <Card>(new Card(card->getSymbol(), card->getValue())));
    }
}
/*
 *\brief returns the size of the deck; 
 */
int Deck::getSize()
{
  return cards.size(); 
}
/*
 *\brief get a card at the top of the deck(last in vector)
 */
Card Deck::getCard()
{
 Card aCard = *cards.back();
 cards.pop_back ();
 return aCard;
}
/*
 *\brief randomly change the order of cards 
 */
void Deck::shuffleDeck()
{
  auto rd = std::random_device{};
  auto rng = std::default_random_engine {rd()};
  std::shuffle(std::begin(cards), std::end(cards), rng);
}
/*
 *\brief remove all cards from the deck
 */
void Deck::clearDeck()
{
  cards.clear();
}
/*
 *\brief reset the deck to regular 52 
 */
void Deck::resetDeck()
{
  cards.clear();
for ( int symbol = 1; symbol < 5; symbol++)
  {
    for (int value = 1; value < 14; value++)
      {
        cards.push_back ( unique_ptr <Card>(new Card(symbol, value)));
      }
  }
}
/*
 *\brief add a Card to the deck;
 */
void Deck::addCard(Card aCard)
{
  cards.push_back(unique_ptr <Card>(new Card(aCard.getSymbol(), aCard.getValue())));
}