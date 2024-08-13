/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   newFile.cpp
 * Author: etudiant
 * 
 * Created on August 1, 2024, 6:10 p.m.
 */

#include "Test.h"
#include <QPainter>
roulette::roulette(QWidget *parent):QWidget(parent)
{
  resize(200, 200);
}
void roulette::paintEvent(QPaintEvent*)
{
  QPainter painter(this);
  painter.drawPoint( 5, 5);
}