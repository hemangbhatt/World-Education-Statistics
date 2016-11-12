/*****************************************
 ** File:    Driver.cpp
 ** Project: CMSC 341 Project 0, Fall 2016
 ** Author:  Hemang Bhatt
 ** Date:    9/13/16
 ** Section: 03
 ** E-mail:  hb6@umbc.edu 
 **
 **   This file contains the main driver program for Project 0.
 ** This program reads the files specified in the project 0 and
 ** displays the results in the format specified in the project description.
 **
 ***********************************************/

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>

#include "Country.h"
#include "Continent.h"

using namespace std;
int main()
{
    // Create 2D string vector for file1
    vector< vector <string> > data1;
    // Create 2D string vector for file2
    vector<vector <string> > data2;

  // Open files.
    ifstream file1("2013WorldBankEducationCensusData.txt");
    ifstream file2("CountriesContinents.txt");
    
    // exit if file did not open sucessfully
    if(file1.fail())
    {
        cerr << "File 1 Error\n";
        exit(1);
    }

    if(file2.fail())
    {
        cerr << "File 2 Error\n";
        exit(1);
    }

    
  string   line;
  // Read one line at a time into the variable line:
  while(getline(file1, line))
    {
      vector<string>   lineData;
      stringstream  lineStream(line);

      string token;
      // Read an integer at a time from the line
      while(lineStream >> token)
        {
	  // Add the token from a line to a 1D array (vector)
	  lineData.push_back(token);
        }
      // When all the tokens have been read, add the 1D array
      // into a 2D array (as one line in the 2D array)
      data1.push_back(lineData);
    }

    
    line = "";
    // Read one line at a time into the variable tokens
    while (getline(file2, line))
    {
        vector<string> lineData;
        stringstream lineStream(line);
        
        string token;
        //Read one word at a time;
        while (lineStream >> token)
        {
            //Add the tokens from a line to 1D vector
            lineData.push_back(token);
            
        }
        
        data2.push_back(lineData);
    }

    
    // To make vector of each continet
    vector <vector <string> > continents;
    for (int i = 0; i < data2.size(); i++ )
    {
      // find continents
        if (data2[i].size() == 3)
        {
            vector <string> list;
            
            for (int j = 0; j <= atoi(data2[i][2].c_str()); j++)
            {
                list.push_back(data2[i+j][0]);
            }
            
            //add 1d Vector to 2d
            continents.push_back(list);
        }
    }

    // creater vector of Continent
    vector < Continent > world;
    
    // add continent to world vector
    for (int i = 0; i < continents.size(); i++)
    {
        Continent temp;
        temp.setNameContinent(continents[i][0]);
        temp.setNumOfCountries(continents[i].size());
        world.push_back(temp);
        
    }
        


    // This function will check that country exits in continents and
    // will find out the proper continent and its position
    for (int i = 0; i < data1.size(); i++)
        {
                
            bool found = false;
            //check for country existence in continents
            for (int row = 0; row < continents.size(); row++)
            {
                for (int column = 1; column < (continents[row]).size(); column++)
                    if (data1[i][0] == continents[row][column] )
                    {
                        found = true;
                        break;
                    }
                if (found)
                    break;
            }
            
            
            if (found)
            {

                Country temp = Country(data1[i][0], data1[i][1], data1[i][2], data1[i][3], data1[i][4], data1[i][5], data1[i][6], data1[i][7], data1[i][8]);
                
		// exit the loop after identifying Country's Continent
                bool flag = false;
                for (int j = 0; j < continents.size(); j++)
                {
                    for (int k = 1; k < continents[j].size(); k++)
                    {
                        if (data1[i][0] == continents[j][k])
                        {
                            world[j].addCountryToContinent(temp);
                            flag = true;
                            break;
                        }
                        
                        if (flag)
                            break;
                        
                    }
                    if (flag)
                        break;
                }
            }
        }
    


    // set population of each continent    
    for (int i = 0; i < world.size(); i++)
    {
        world[i].setPopulationContinent(world, i);
    }
    

    // set highestGDP, highest Literay Rate
    // and highest Population of each continent
    for (int i = 0; i < world.size(); i++)
    {
        world[i].setHLRate(world, i);
        world[i].setHGDPSpent(world, i);
        world[i].setHPopulation(world, i);
    }
    
    // use overloaded cout operator from Continent class
    // to print the required details     
    for (int conti = 0; conti < world.size(); conti++)
      cout << world[conti];
    

    return 0;
}
