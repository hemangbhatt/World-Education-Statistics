/*****************************************
 ** File:    Country.h
 ** Project: CMSC 341 Project 0, Fall 2016
 ** Author:  Hemang Bhatt
 ** Date:    9/13/16
 ** Section: 03
 ** E-mail:  hb6@umbc.edu 
 **
 **   This file contains the Country.h program for Project 0.
 ** This file contains Country class and its function prototypes.
 **
 ***********************************************/

#ifndef _COUNTRY_H
#define _COUNTRY_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Country
{

public:

  //Default Constructor
  Country();

  //Alternate Constructor
  /*************************************************************
  pre-condition: User will pass string from s1 to s9
  post-condition: it will convert string to related data_types
  **************************************************************/
  Country(string s1, string s2, string s3, string s4, string s5, string s6, string s7, string s8, string s9);
  // getters

  //-------------------------------------------------------
  // Name: getName
  // PreCondition:  none
  // PostCondition: Returns the name of the class
  //---------------------------------------------------------
  string getName();


  //-------------------------------------------------------
  // Name: getPopulation
  // PreCondition:  none
  // PostCondition: Returns the population of the country
  //---------------------------------------------------------
  long getPopulation();

  //-------------------------------------------------------
  // Name: getLRate
  // PreCondition:  none
  // PostCondition: Returns the literacy Rate of the country
  //---------------------------------------------------------
  float getLRate();


  //-------------------------------------------------------
  // Name: getPCFemale
  // PreCondition:  none
  // PostCondition: Returns the primary compeltion rate of female
  // in the country
  //---------------------------------------------------------
  float getPCFemale();


  //-------------------------------------------------------
  // Name: getPCMale
  // PreCondition:  none
  // PostCondition: Returns the primary competion rate of male
  // in the country
  //---------------------------------------------------------
  float getPCMale();


  //-------------------------------------------------------
  // Name: getPCTotal
  // PreCondition:  none
  // PostCondition: Returns the primary completion rate of total
  //---------------------------------------------------------
  float getPCTotal();


  //-------------------------------------------------------
  // Name: getGDPSpent
  // PreCondition:  none
  // PostCondition: Returns the gdp spent on the education
  //---------------------------------------------------------
  float getGDPSpent();


  //-------------------------------------------------------
  // Name: getYLRFemale
  // PreCondition:  none
  // PostCondition: Returns the youth literacy rate of female
  //---------------------------------------------------------
  float getYLRFemale();


  //-------------------------------------------------------
  // Name: getYLRMale
  // PreCondition:  none
  // PostCondition: Returns the youth literacy rate of male
  //---------------------------------------------------------
  float getYLRMale();
  
  // setters

  //-------------------------------------------------------
  // Name: setName
  // PreCondition:  pass string as parameter
  // PostCondition: saves string into name variable
  //--------------------------------------------------------- 
  void setName(string newName);


  //-------------------------------------------------------
  // Name: setPopulation
  // PreCondition:  pass string into function
  // PostCondition: converts string into long variable and saves
  // into population variable
  //---------------------------------------------------------
  void setPopulation(string pop);
 

  //-------------------------------------------------------
  // Name: setLRate
  // PreCondition:  pass string into function
  // PostCondition: converts string into float variable and
  // sets to literacyRate
  //---------------------------------------------------------
  void setLRate(string num );
 

  //-------------------------------------------------------
  // Name: setPCFemale
  // PreCondition:  pass string into function
  // PostCondition: converts string into float and sets
  // to primaryCompletionFemale
  //---------------------------------------------------------
  void setPCFemale(string num);
 

  //-------------------------------------------------------
  // Name: setPCMale
  // PreCondition:  pass string into function
  // PostCondition: converts string into float and sets
  // to primaryCompletionMale
  //---------------------------------------------------------
  void setPCMale(string num);


  //-------------------------------------------------------
  // Name: setPCTotal
  // PreCondition:  pass string into function
  // PostCondition: converts string into float and sets
  // to primaryCompletionTotal
  //---------------------------------------------------------
  void setPCTotal(string num);


  //-------------------------------------------------------
  // Name: setGDPSpent
  // PreCondition:  pass string into function
  // PostCondition: converts string into float and sets
  // to GDPSpent
  //---------------------------------------------------------
  void setGDPSpent(string num);


  //-------------------------------------------------------
  // Name: setYLRFemale
  // PreCondition:  pass string into function
  // PostCondition: converts string into float and sets
  // to youthLitRateFemale
  //---------------------------------------------------------
  void setYLRFemale(string num);


  //-------------------------------------------------------
  // Name: setYLRFMale
  // PreCondition:  pass string into function
  // PostCondition: converts string into float and sets
  // to youthLitRateMale
  //---------------------------------------------------------
  void setYLRMale(string num);



private:
  string name;
  long population;
  float literacyRate;
  float primaryCompletionFemale;
  float primaryCompletionMale;
  float primaryCompletionTotal;
  float educationGDPSpent;
  float youthLitRateFemale;;
  float youthLitRateMale;

};

#endif // Country Class
