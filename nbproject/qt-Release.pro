# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = QT_Blackjack
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += BlackJack.cpp Card.cpp ContratException.cpp DealerHand.cpp Deck.cpp GameScreen.cpp Player.cpp PlayerHand.cpp RouletteTable.cpp RouletteWheel.cpp StartScreen.cpp StraightUpBet.cpp Table.cpp TableRoulette.cpp Test.cpp main.cpp
HEADERS += BlackJack.h Card.h ContratException.h DealerHand.h Deck.h GameScreen.h Player.h PlayerHand.h RouletteTable.h RouletteWheel.h StartScreen.h StraightUpBet.h Table.h TableRoulette.h Test.h
FORMS += GameScreen.ui RouletteWheel.ui StartScreen.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
