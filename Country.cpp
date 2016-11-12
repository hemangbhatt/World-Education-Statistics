/*****************************************
 ** File:    Country.cpp
 ** Project: CMSC 341 Project 0, Fall 2005
 ** Author:  Hemang Bhatt
 ** Date:    9/13/16
 ** Section: 03
 ** E-mail:  hb6@umbc.edu 
 **
 ** This file contains the implemention of the Country Class for Project 0.
 ** Read the Function prototypes in header file
 ***********************************************/

#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
using namespace std;

#include "Country.h"

// Implemention of Country Class
Country :: Country() : name(""), population(0), literacyRate(0), primaryCompletionFemale(0), primaryCompletionMale(0),
		       primaryCompletionTotal(0), educationGDPSpent(0), youthLitRateFemale(0), youthLitRateMale(0){}



string Country :: getName() { return name; }

long Country :: getPopulation() { return population; }

float Country :: getLRate() { return literacyRate; }

float Country :: getPCFemale() { return primaryCompletionFemale; }

float Country :: getPCMale() { return primaryCompletionMale; }

float Country :: getPCTotal() { return primaryCompletionTotal; }

float Country :: getGDPSpent() { return educationGDPSpent; }

float Country :: getYLRFemale() { return youthLitRateFemale; }

float Country :: getYLRMale() { return youthLitRateMale; }
  
void Country :: setName(string newName) { name = newName; }

void Country :: setPopulation(string pop) { population = atol(pop.c_str()); }


void Country :: setLRate(string num) 
{
  //check for sanity
  if (num == "N/A" )
    literacyRate = -1;
  else
    literacyRate = atof(num.c_str());
}

void Country::setPCFemale(string num)
{
  // check for sanity
  if ( num == "N/A" )
    primaryCompletionFemale = -1;
  else
    primaryCompletionFemale = atof(num.c_str());
}

void Country::setPCMale(string num)
{
  // check for sanity
  if ( num == "N/A" )
    primaryCompletionMale = -1;
  else
    primaryCompletionMale = atof(num.c_str());
}

void Country::setPCTotal(string num)
{
  // check for sanity
  if ( num == "N/A" )
    primaryCompletionTotal = -1;
  else
    primaryCompletionTotal = atof(num.c_str());
}

void Country::setGDPSpent(string num)
{
  // check for sanity
  if ( num == "N/A" )
    educationGDPSpent = -1;
  else
    educationGDPSpent = atof(num.c_str());
}

void Country::setYLRFemale(string num)
{
  // check for sanity
  if ( num == "N/A" )
    youthLitRateFemale = -1;
  else
    youthLitRateFemale = atof(num.c_str());
}

void Country::setYLRMale(string num)
{
  // check for sanity
  if ( num == "N/A" )
    youthLitRateMale = -1;
  else
    youthLitRateMale = atof(num.c_str());
}



// Alternate constructor take 9 string as parameter and converts 
// it according to relate data types 
// atof converts strings into float
// atol converts strings into long
Country :: Country(string s1, string s2, string s3, string s4, string s5, string s6, string s7, string s8, string s9)
{
  name = s1;

  if (s2 == "N/A")
    population = -1;
  else
    population = atoi(s2.c_str());

  if ( s3 == "N/A")
    literacyRate = -1;
  else
    literacyRate = atof(s3.c_str());

  if ( s4 == "N/A" )
    educationGDPSpent = -1;
  else
    educationGDPSpent = atof(s4.c_str());
  
  if ( s5 == "N/A" )
    primaryCompletionTotal = -1;
  else
    primaryCompletionTotal = atof(s5.c_str());

  if ( s6 == "N/A" )
    primaryCompletionMale = -1;
  else
    primaryCompletionMale = atof(s6.c_str());

  if ( s7 == "N/A" )
    primaryCompletionFemale = -1;
  else
    primaryCompletionFemale = atof(s7.c_str());

  if ( s8 == "N/A" )
    youthLitRateFemale = -1;
  else
    youthLitRateFemale = atof(s8.c_str());
       
  if ( s9 == "N/A" )
    youthLitRateMale = -1;
  else
    youthLitRateMale = atof(s9.c_str());
}
