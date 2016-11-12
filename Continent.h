/*****************************************
 ** File:    Continent.h
 ** Project: CMSC 341 Project 0, Fall 2016
 ** Author:  Hemang Bhatt
 ** Date:    9/13/16
 ** Section: 03
 ** E-mail:  hb6@umbc.edu 
 **
 **   This file contains the Continent Class function prototypes and its member
 ** variable of project 0
  ***********************************************/

#ifndef Continent_h
#define Continent_h

#include <iostream>
#include <vector>
#include "Country.h"

using namespace std;

// child class of Country
class Continent : public Country
{
public:

  // getters

  // return the country with highest GDP Spent
  Country getHGDPSpent();

  // return the country with highest population
  Country getHPopulation();

  // return the country with highest literacy rate
  Country getHLRate();

  // return the name of continent
  string getNameContinent();

  // return the country on the related postion of Continent
  Country getCountriesInContinent(int num);

  // return toal population of Continent
  long getPopulationContinent();

  // return number of countries in the Continent
  long getNumOfCountries();

  //setters

    
  // add country to the continent vector
  void addCountryToContinent(Country temp);

  // find and set the country with Highest gdp Spent on the education 
  void setHGDPSpent(vector<Continent> world, int posOfContinent);

  // find and set the country with Highest population
  void setHPopulation(vector<Continent> world, int posOfContinent);

  // find and set the country with highest literacy Rate
  void setHLRate(vector< Continent> world, int numOfPosition);

  // set the name of the continent
  void setNameContinent(string name);

  // find and set the total population of the continent
  void setPopulationContinent(vector <Continent> world, int posOfContinent);

  // set the number of countris in the continent
  void setNumOfCountries(long num);

  // this function will overload the cout operator to printout the 
  // details of the continent
  friend ostream& operator<< (ostream& outStream, Continent& continent);

    
private:
  vector <Country> countriesInContinent ;
  Country highestPopultion;
  Country highestGDPSpent;
  Country highestLiteracyRate;
  string nameContinent;
  long populationContinent;
  long numOfCountries;
    
};

#endif /* Continent_h */
