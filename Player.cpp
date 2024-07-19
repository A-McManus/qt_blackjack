/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   Player.cpp
 * Author: etudiant
 * 
 * Created on June 24, 2024, 7:58 p.m.
 */

#include "Player.h"
Player::Player()
{
}

int Player::getMoney()
{
  return money;
}

std::string Player::getName()
{
 return name; 
}

void Player:: changeMoney(int amount)
{
  money += amount;
}

void Player::reset()
{
  money = 50;
}
