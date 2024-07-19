/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   PlayerHand.cpp
 * Author: etudiant
 * 
 * Created on June 7, 2024, 3:20 p.m.
 */

#include "PlayerHand.h"
PlayerHand::PlayerHand(): Deck()
{
clearDeck(); 
}
PlayerHand::PlayerHand(const PlayerHand & aPlayerHand):Deck(aPlayerHand)
{
  
}
/*
 *\brief returns an int of the sum of all the cards 
 */
int PlayerHand::getTotal()
{
  int total = 0;
  int aces = 0;
  for ( const auto & element: cards)
    {
      int value = element->getValue();
      switch (value)
        {
        case 1: total += 11; aces +=1; break;
        case 11: total += 10; break;
        case 12: total += 10; break;
        case 13: total += 10; break;
        default: total += value;
        }
      
    };
    while (total > 21 && aces>0) 
      {
        total -= 10;
        aces -=1;
      }
  return total;
}
/*
 *\brief returns a bool as true if the total is greater than 21; 
 */
bool PlayerHand::checkTotal()
{
  bool noBust = true;
  int total = getTotal();
  if(total>21) noBust = false;
  return noBust;
}
/*
 *\brief returns a string containing every card formatted 
 */
std::string PlayerHand::showHand()
{
  std::ostringstream output;
  for ( const auto & element: cards)
    {
      output << "[";
      output << element->getCard();
      output << "] ";
    }
  return output.str();
}
Card PlayerHand::getCard(int slot)
{
  return Card(cards[slot]->getSymbol(), cards[slot]->getValue());
}