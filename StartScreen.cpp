/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.cc to edit this template
 */

/*
 * File:   StartScreen.cpp
 * Author: etudiant
 *
 * Created on June 28, 2024, 8:31 p.m.
 */

#include "StartScreen.h"

StartScreen::StartScreen ()
{
  widget.setupUi (this);
}

void StartScreen::play()
{
  Game.show();
}
StartScreen::~StartScreen () { }
