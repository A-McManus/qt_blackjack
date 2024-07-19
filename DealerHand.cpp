/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   DealerHand.cpp
 * Author: etudiant
 * 
 * Created on June 9, 2024, 3:14 p.m.
 */

#include "DealerHand.h"
DealerHand::DealerHand() : PlayerHand()
{
}

DealerHand::DealerHand(const DealerHand & aDealerHand):PlayerHand(aDealerHand)
{
}
/*
 * \brief shows the dealers hand but the first card is hidden
 */
std::string DealerHand::showHiddenHand()
{
  std::ostringstream output;
  if(getSize() < 1) return output.str();
  output << "[HIDDEN] ";
  for(int i= getSize()-1; i > 0; i--)
  {
      output << "[";
      output << cards[i]->getCard();
      output << "] ";
  }
  return output.str();
}