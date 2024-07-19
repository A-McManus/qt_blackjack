/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   Card.cpp
 * Author: etudiant
 * 
 * Created on May 30, 2024, 5:51 p.m.
 */

#include "Card.h"
#include "ContratException.h"
using namespace std;
Card::Card(int n_symbol, int n_value): symbol(n_symbol), value(n_value)
{
  PRECONDITION(n_symbol > 0);
  PRECONDITION(n_symbol < 5);
  PRECONDITION(n_value > 0);
  PRECONDITION(n_value < 14);
}
/*
 *\brief return the int corresponding to the symbol of the card 1-club, 2-diamonds, 3-heart 4-spade
 */
int Card::getSymbol()
{
  return symbol;
}
/*
 *\brief  change the symbol of a card
 */
void Card::setSymbol(int n_symbol)
{
  PRECONDITION(n_symbol > 0);
  PRECONDITION(n_symbol < 5);
  symbol = n_symbol;
}
/*
 *\brief get the value of a card number between 1-13 inclusively
 */
int Card::getValue()
{
  return value;
}
/*
 *\brief set the value of a card 
 */
void Card::setValue(int n_value)
{
  PRECONDITION(n_value > 0);
  PRECONDITION(n_value < 14);
  value = n_value;
}
/*
 *\brief set the symbol and the value of a card
 */
void Card::setCard(int n_symbol, int n_value)
{
  PRECONDITION(n_symbol > 0);
  PRECONDITION(n_symbol < 5);
  PRECONDITION(n_value > 0);
  PRECONDITION(n_value < 14);
  symbol = n_symbol;
  value = n_value;
}
/*
 *\brief return a formated string of the card;
 */
string Card::getCard()
{
  ostringstream output;
  switch(symbol)
    {
  case 1: output << "\u2663"; break;
  case 2: output << "\u2666"; break;
  case 3: output << "\u2665"; break;
  default: output <<  "\u2660"; break;
    }
  switch (value)
    {
  case 1: output << " A"; break;
  case 11 : output << " J"; break;
  case 12 : output << " \u2655"; break;
  case 13 : output << " \u265A"; break;
  default : output << value;
    }     
  switch(symbol)
    {
  case 1: output << " \u2663"; break;
  case 2: output << " \u2666"; break;
  case 3: output << " \u2665"; break;
  default: output <<  " \u2660"; break;
    }
  return output.str();
}
