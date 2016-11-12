/*****************************************
 ** File:    Continent.cpp
 ** Project: CMSC 341 Project 0, Fall 2016
 ** Author:  Hemang Bhatt
 ** Date:    9/13/16
 ** Section: 03
 ** E-mail:  hb6@umbc.edu 
 **
 **   This file contains implementions of Continent class for Project 0.
 **   Read header file for function proto-types.
 **
 ***********************************************/

#include "Continent.h"

#include <iostream>
#include <vector>

using namespace std;

Country Continent :: getCountriesInContinent(int num) { return countriesInContinent[num]; }

Country Continent :: getHGDPSpent() { return highestGDPSpent; }

Country Continent :: getHPopulation() { return highestPopultion; }

Country Continent :: getHLRate() { return highestLiteracyRate; }

string Continent :: getNameContinent() { return nameContinent; }

long Continent :: getPopulationContinent() { return populationContinent; }

long Continent :: getNumOfCountries() { return numOfCountries; }

// add country to this continent
void Continent :: addCountryToContinent (Country temp)
{
    countriesInContinent.push_back(temp);
}

// find and set country with highest gdp spent on eduacatin in this continent
void Continent :: setHGDPSpent(vector < Continent> world, int posOfContinent)
{

    float highestGDP = 0;

    for (int i = 0; i < world[posOfContinent].numOfCountries; i++)
    {

        if (world[posOfContinent].getCountriesInContinent(i).getGDPSpent() > highestGDP)
        {
            highestGDP = world[posOfContinent].getCountriesInContinent(i).getGDPSpent();
            highestGDPSpent = world[posOfContinent].getCountriesInContinent(i);
        }
    }
}

// find and set country with highest population
void Continent :: setHPopulation(vector<Continent> world, int posOfContinent)
{
    long highestPop = 0;
    for (int i = 0; i < world[posOfContinent].numOfCountries; i++)
    {
        if (world[posOfContinent].getCountriesInContinent(i).getPopulation() > highestPop )
        {
            highestPop = world[posOfContinent].getCountriesInContinent(i).getPopulation();
            highestPopultion = world[posOfContinent].getCountriesInContinent(i);
        }
    }
}

// find and set country with highest literacy rate
void Continent :: setHLRate(vector<Continent> world, int posOfContinent)
{
    float highestLiteracy = 0;
    for (int i = 0; i < world[posOfContinent].numOfCountries; i++)
    {
        if ( world[posOfContinent].getCountriesInContinent(i).getLRate()  > highestLiteracy)
        {
            highestLiteracy = world[posOfContinent].getCountriesInContinent(i).getLRate();
            highestLiteracyRate = world[posOfContinent].getCountriesInContinent(i);
        }
    }
    
}

// set name of continet
void Continent :: setNameContinent(string name) { nameContinent = name; }

// set number of country in this continent
void Continent :: setNumOfCountries(long num) { numOfCountries = num - 1; }

// set total population of continent by adding population of each country in it
void Continent :: setPopulationContinent(vector <Continent> world, int posOfContinent)
{
    populationContinent = 0;
    for (int i = 0; i < world[posOfContinent].numOfCountries; i++)
    {
        if ( world[posOfContinent].getCountriesInContinent(i).getPopulation() > 0)
        populationContinent +=  world[posOfContinent].getCountriesInContinent(i).getPopulation();
    }
    
}

// this function will overload cout operator for Continent object
ostream& operator<< (ostream& outStream, Continent& c)
{

    outStream << c.getNameContinent() << endl;
    outStream << "Population: "<< c.getPopulationContinent() << endl;
    outStream << "Country with the highest literacy rate: " << c.getHLRate().getName()  << " with a population of " << c.getHLRate().getPopulation() 
	      << " and a literacy rate of " << c.getHLRate().getLRate() << endl;
    outStream << "Country with the highest GDP expenditure on education : " << c.getHGDPSpent().getName() << " with a population of " << c.getHGDPSpent().getPopulation() 
	      << " and a literacy rate of " << c.getHGDPSpent().getLRate() << endl;
    outStream << "Country with the highest population : " << c.getHPopulation().getName() << " with a population of  " << c.getHPopulation().getPopulation() 
	      << " and a literacy rate of " << c.getHPopulation().getLRate() << endl;


    return outStream;

}
