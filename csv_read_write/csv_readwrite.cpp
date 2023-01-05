#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <regex>
#include "common_include.h" 
using namespace std;
fstream csvfile;
std::string filename_cr;

void csv_readwrite(void)
{

	cout<<"parsing csv in progress......\n"<<endl;
	
	ofstream myfile;
	filename_cr = "output.csv";
    try
    {
		remove(filename_cr.c_str());
    }
    catch(...)
    {

    }
	myfile.open(filename_cr, ios::out | ios::app);
	
	string line, word;
    fstream file("input/Speed_dist.csv", ios::in);
    int cr_line = 1,idx = 0,val,speed,dist,total_dist = 0;
	float time = 0.00;
	
    if (file.is_open())
    {
        while (getline(file, line))
        {
			stringstream str(line);
			int temp = 1;
            if (cr_line == 1)
            {
				while (getline(str, word, ','))
				{
					try
					{
						word = std::regex_replace(word,std::regex("\\r\\n|\\r|\\n"),"");
					}
					catch(...)
					{
			
					}
					myfile<<word<<",";
					cout<<" "<<word;
				}
				myfile<<"Time(h)"<<endl;
				cout<<"\n"<<endl;
                cr_line = 2;
                continue;
            }
			
            while(getline(str, word, ','))
			{
                val = stoi(word);
				if(temp == 1)
				{
					//speed_ary[idx] = val;
					speed = val;
					cout<<"	"<<val;
					myfile<<speed<<",";
					temp = temp + 1;
					
				}
				else if(temp == 2)
				{
					dist = val;
					total_dist += dist;
					myfile<<dist<<",";
					cout<<"	 "<<val<<"\n"<<endl;
					time = (float)dist/(float)speed;
					myfile<<time<<endl;
					temp = temp + 1;
					
				}
			}
				
        }
    }
	myfile.close();
	cout<<"\nTotal Distance Covered : "<<total_dist<<" KM"<<endl;
	cout<<"CSV Parsed Successfully!!!!"<<endl;
	//return 0;
}
