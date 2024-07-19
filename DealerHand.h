/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   DealerHand.h
 * Author: etudiant
 *
 * Created on June 9, 2024, 3:14 p.m.
 */

#ifndef DEALERHAND_H
#define DEALERHAND_H

#endif /* DEALERHAND_H */
#include "PlayerHand.h"
class DealerHand : public PlayerHand
{
  public: 
  DealerHand();
  DealerHand(const DealerHand & aDealerHand);
  std::string showHiddenHand();  
  private:
      
};