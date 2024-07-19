/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   Player.h
 * Author: etudiant
 *
 * Created on June 24, 2024, 7:58 p.m.
 */

#ifndef PLAYER_H
#define PLAYER_H

#endif /* PLAYER_H */

#include <string>

class Player
{
public:
  Player();
  int getMoney();
  std::string getName();
  void changeMoney(int amount);
  void reset();
  //~Player();
private:
  int money = 50;
  std::string name = "bob";
};