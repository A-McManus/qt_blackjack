/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   Card.h
 * Author: etudiant
 *
 * Created on May 30, 2024, 5:51 p.m.
 */

#ifndef CARD_H
#define CARD_H

#endif /* CARD_H */
#include <string>
#include <sstream>

class Card
{
public:
  Card(int n_symbol,int n_value);
  int getValue();
  void setValue(int n_value);
  int getSymbol();
  void setSymbol(int n_symbol);
  std::string getCard();
  void setCard(int n_symbol,int n_value);
private:
  int symbol;
  int value;
  
};