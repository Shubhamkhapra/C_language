/*write  a program of more than  one classes
Author:shalini, date:1 0ct 2021*/
#include<iostream>
#include<string>
using namespace std;
class student 
	{
		char *str;
		public:
			student (char s [])
		{
					str=new char [strlen (s)+1];	
					strcpy(str,s);
			}
				void put()
				{
					cout<<str<<endl;
				}	
				
		};
			  main()
			{
				student s1("ramandeep"),s2("rinki"),s3("shalini");
					s1.put();
					s2.put();
					s3.put();
			}
