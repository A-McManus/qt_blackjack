/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   PlayerHand.h
 * Author: etudiant
 *
 * Created on June 7, 2024, 3:20 p.m.
 */

#ifndef PLAYERHAND_H
#define PLAYERHAND_H

#endif /* PLAYERHAND_H */


#include "Deck.h"


class PlayerHand : public Deck
{
  public:
PlayerHand();
PlayerHand(const PlayerHand & aPlayerHand);
int getTotal();
bool checkTotal();
std::string showHand();
Card getCard(int slot);
private:
      
};